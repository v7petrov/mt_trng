// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng.h for the primary calling header

#include "Vtest_trng__pch.h"
#include "Vtest_trng__Syms.h"
#include "Vtest_trng___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_trng___024root___eval_initial__TOP__Vtiming__0(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.test_trng__DOT__clk = 0U;
    vlSelfRef.test_trng__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_trng.sv", 
                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_trng__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_trng.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Testing TRNG top module...\n",0);
    vlSelfRef.test_trng__DOT__trng_d1 = 1U;
    vlSelfRef.test_trng__DOT__trng_d2 = 0U;
    vlSelfRef.test_trng__DOT__trng_d3 = 0x15U;
    vlSelfRef.test_trng__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_trng.sv", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_trng__DOT__rst = 0U;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xc8U;
    while (VL_LTS_III(32, 0U, __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_trng.clk)", 
                                                             "test_trng.sv", 
                                                             48);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:52: Assertion failed in %Ntest_trng.test_trng_basic_operation: TRNG o_valid active after reset\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 52, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce)))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:57: Assertion failed in %Ntest_trng.test_trng_basic_operation: TRNG o_valid not active during INIT state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 57, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce)))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:68: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid not active on 5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 68, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:71: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 71, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce)))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:68: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid not active on 5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 68, "");
        }
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    vlSelfRef.test_trng__DOT__changed = 0U;
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         82);
    if (((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))) 
         != (IData)(vlSelfRef.test_trng__DOT__prev_warbler))) {
        vlSelfRef.test_trng__DOT__changed = 1U;
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_trng__DOT__prev_warbler = (1U & 
                                              (0x2778a365U 
                                               >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.test_trng__DOT__changed)))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:90: Assertion failed in %Ntest_trng.test_trng_basic_operation: TRNG o_warbler did not change during 50 cycles of operation\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 90, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test_trng.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("TRNG test completed!\n",0);
    VL_FINISH_MT("test_trng.sv", 112, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng___024root___dump_triggers__act(Vtest_trng___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_trng___024root___eval_triggers__act(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_triggers__act\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_trng__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_trng__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.test_trng__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_trng__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng__DOT__clk__0 
        = vlSelfRef.test_trng__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng__DOT__rst__0 
        = vlSelfRef.test_trng__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_trng___024root___dump_triggers__act(vlSelf);
    }
#endif
}
