// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_fsm.h for the primary calling header

#include "Vtest_fsm__pch.h"
#include "Vtest_fsm__Syms.h"
#include "Vtest_fsm___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_fsm___024root___eval_initial__TOP__Vtiming__0(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_fsm__DOT__clk = 0U;
    vlSelfRef.test_fsm__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_fsm.sv", 
                                         72);
    vlSelfRef.test_fsm__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_fsm.sv", 
                                         74);
    VL_WRITEF_NX("Testing FSM module...\n",0);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                                    & (2U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))) 
                                   & (1U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:36: Assertion failed in %Ntest_fsm.test_fsm_states: FSM not in correct LOAD state at startup\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 36, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         39);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((4U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                                    & (2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))) 
                                   & (1U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:42: Assertion failed in %Ntest_fsm.test_fsm_states: FSM did not transition to INIT state after 17 cycles\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 42, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         45);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((4U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                                    & (2U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))) 
                                   & (1U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:48: Assertion failed in %Ntest_fsm.test_fsm_states: FSM did not transition to RUN state after 36 more cycles\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 48, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         51);
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                                   || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                                        ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                                        : (4U == (0x3fU 
                                                  & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:56: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce not active on 5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 56, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                          || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                               ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                               : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:59: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_haa3b0681__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_fsm.clk)", 
                                                         "test_fsm.sv", 
                                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                                   || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                                        ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                                        : (4U == (0x3fU 
                                                  & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_fsm.sv:56: Assertion failed in %Ntest_fsm.test_fsm_states.unnamedblk1: FSM nlfsr3_ce not active on 5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_fsm.sv", 56, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test_fsm.sv", 
                                         81);
    VL_WRITEF_NX("FSM test completed!\n",0);
    VL_FINISH_MT("test_fsm.sv", 83, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_fsm___024root___dump_triggers__act(Vtest_fsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_fsm___024root___eval_triggers__act(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_triggers__act\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_fsm__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_fsm__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.test_fsm__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_fsm__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_fsm__DOT__clk__0 
        = vlSelfRef.test_fsm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_fsm__DOT__rst__0 
        = vlSelfRef.test_fsm__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_fsm___024root___dump_triggers__act(vlSelf);
    }
#endif
}
