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
    IData/*31:0*/ __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high = 0;
    IData/*31:0*/ __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low = 0;
    IData/*31:0*/ __Vtask_test_trng__DOT__test_trng_basic_operation__0__diff;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__diff = 0;
    // Body
    vlSelfRef.test_trng__DOT__clk = 0U;
    vlSelfRef.test_trng__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_trng.sv", 
                                         111);
    vlSelfRef.test_trng__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_trng.sv", 
                                         113);
    VL_WRITEF_NX("Testing TRNG top module...\n",0);
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high = 0U;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low = 0U;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__diff = 0U;
    vlSelfRef.test_trng__DOT__trng_d1 = 1U;
    vlSelfRef.test_trng__DOT__trng_d2 = 0U;
    vlSelfRef.test_trng__DOT__trng_d3 = 0x15U;
    vlSelfRef.test_trng__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_trng.sv", 
                                         55);
    vlSelfRef.test_trng__DOT__rst = 0U;
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xc8U;
    while (VL_LTS_III(32, 0U, __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_trng.clk)", 
                                                             "test_trng.sv", 
                                                             57);
        __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:61: Assertion failed in %Ntest_trng.test_trng_basic_operation: TRNG o_valid active after reset\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 61, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         64);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         70);
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:75: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid not active on 5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 75, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                          & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:78: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid active on non-5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 78, "");
        }
    }
    co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_trng.clk)", 
                                                         "test_trng.sv", 
                                                         72);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:75: Assertion failed in %Ntest_trng.test_trng_basic_operation.unnamedblk1: TRNG o_valid not active on 5th cycle during RUN state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_trng.sv", 75, "");
        }
    }
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x3e8U;
    while (VL_LTS_III(32, 0U, __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_he06f1ef9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_trng.clk)", 
                                                             "test_trng.sv", 
                                                             84);
        if (((0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3__DOT__C1)) 
             & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en)))) {
            __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high 
                = ((IData)(1U) + __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high);
        } else if (((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                    & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__output_en))) {
            __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low 
                = ((IData)(1U) + __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low);
        }
        __Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_test_trng__DOT__test_trng_basic_operation__0__test_trng__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_test_trng__DOT__test_trng_basic_operation__0__diff 
        = (VL_GTS_III(32, __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high, __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low)
            ? (__Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high 
               - __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low)
            : (__Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low 
               - __Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high));
    VL_WRITEF_NX("TRNG o_warbler high: %0d, low: %0d, diff: %0d\n",0,
                 32,__Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_high,
                 32,__Vtask_test_trng__DOT__test_trng_basic_operation__0__warbler_o_low,
                 32,__Vtask_test_trng__DOT__test_trng_basic_operation__0__diff);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((VL_LTS_III(32, 0x14U, __Vtask_test_trng__DOT__test_trng_basic_operation__0__diff)))) {
            VL_WRITEF_NX("[%0t] %%Error: test_trng.sv:99: Assertion failed in %Ntest_trng.test_trng_basic_operation: TRNG o_warbler output is skewed: imbalance of %0d exceeds threshold\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_test_trng__DOT__test_trng_basic_operation__0__diff);
            VL_STOP_MT("test_trng.sv", 99, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test_trng.sv", 
                                         120);
    VL_WRITEF_NX("TRNG test completed!\n",0);
    VL_FINISH_MT("test_trng.sv", 122, "");
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
