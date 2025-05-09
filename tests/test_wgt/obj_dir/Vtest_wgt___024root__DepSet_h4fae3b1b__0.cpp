// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_wgt.h for the primary calling header

#include "Vtest_wgt__pch.h"
#include "Vtest_wgt__Syms.h"
#include "Vtest_wgt___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_wgt___024root___eval_initial__TOP__Vtiming__0(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_gamma_mult__0__x;
    __Vtask_test_wgt__DOT__test_gamma_mult__0__x = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_gamma_mult__0__expected;
    __Vtask_test_wgt__DOT__test_gamma_mult__0__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_gamma_mult__1__x;
    __Vtask_test_wgt__DOT__test_gamma_mult__1__x = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_gamma_mult__1__expected;
    __Vtask_test_wgt__DOT__test_gamma_mult__1__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_gamma_mult__2__x;
    __Vtask_test_wgt__DOT__test_gamma_mult__2__x = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_gamma_mult__2__expected;
    __Vtask_test_wgt__DOT__test_gamma_mult__2__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_wgt1_5__3__addr;
    __Vtask_test_wgt__DOT__test_wgt1_5__3__addr = 0;
    CData/*0:0*/ __Vtask_test_wgt__DOT__test_wgt1_5__3__expected;
    __Vtask_test_wgt__DOT__test_wgt1_5__3__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_wgt1_5__4__addr;
    __Vtask_test_wgt__DOT__test_wgt1_5__4__addr = 0;
    CData/*0:0*/ __Vtask_test_wgt__DOT__test_wgt1_5__4__expected;
    __Vtask_test_wgt__DOT__test_wgt1_5__4__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_wgt1_5__5__addr;
    __Vtask_test_wgt__DOT__test_wgt1_5__5__addr = 0;
    CData/*0:0*/ __Vtask_test_wgt__DOT__test_wgt1_5__5__expected;
    __Vtask_test_wgt__DOT__test_wgt1_5__5__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_wgt2_5__6__addr;
    __Vtask_test_wgt__DOT__test_wgt2_5__6__addr = 0;
    CData/*0:0*/ __Vtask_test_wgt__DOT__test_wgt2_5__6__expected;
    __Vtask_test_wgt__DOT__test_wgt2_5__6__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_wgt2_5__7__addr;
    __Vtask_test_wgt__DOT__test_wgt2_5__7__addr = 0;
    CData/*0:0*/ __Vtask_test_wgt__DOT__test_wgt2_5__7__expected;
    __Vtask_test_wgt__DOT__test_wgt2_5__7__expected = 0;
    CData/*4:0*/ __Vtask_test_wgt__DOT__test_wgt2_5__8__addr;
    __Vtask_test_wgt__DOT__test_wgt2_5__8__addr = 0;
    CData/*0:0*/ __Vtask_test_wgt__DOT__test_wgt2_5__8__expected;
    __Vtask_test_wgt__DOT__test_wgt2_5__8__expected = 0;
    // Body
    vlSelfRef.test_wgt__DOT__clk = 0U;
    vlSelfRef.test_wgt__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_wgt.sv", 
                                         84);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_wgt__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_wgt.sv", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Testing gamma_mult module...\n",0);
    __Vtask_test_wgt__DOT__test_gamma_mult__0__expected = 0xcU;
    __Vtask_test_wgt__DOT__test_gamma_mult__0__x = 1U;
    vlSelfRef.test_wgt__DOT__gamma_in = __Vtask_test_wgt__DOT__test_gamma_mult__0__x;
    vlSelfRef.test_wgt__DOT__gamma_expected = __Vtask_test_wgt__DOT__test_gamma_mult__0__expected;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__gamma_out) 
                          != (IData)(__Vtask_test_wgt__DOT__test_gamma_mult__0__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:35: Assertion failed in %Ntest_wgt.test_gamma_mult: Gamma_mult test failed: input=%b, got=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_gamma_mult__0__x),
                         5,vlSelfRef.test_wgt__DOT__gamma_out,
                         5,(IData)(__Vtask_test_wgt__DOT__test_gamma_mult__0__expected));
            VL_STOP_MT("test_wgt.sv", 35, "");
        }
    }
    __Vtask_test_wgt__DOT__test_gamma_mult__1__expected = 0x18U;
    __Vtask_test_wgt__DOT__test_gamma_mult__1__x = 2U;
    vlSelfRef.test_wgt__DOT__gamma_in = __Vtask_test_wgt__DOT__test_gamma_mult__1__x;
    vlSelfRef.test_wgt__DOT__gamma_expected = __Vtask_test_wgt__DOT__test_gamma_mult__1__expected;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__gamma_out) 
                          != (IData)(__Vtask_test_wgt__DOT__test_gamma_mult__1__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:35: Assertion failed in %Ntest_wgt.test_gamma_mult: Gamma_mult test failed: input=%b, got=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_gamma_mult__1__x),
                         5,vlSelfRef.test_wgt__DOT__gamma_out,
                         5,(IData)(__Vtask_test_wgt__DOT__test_gamma_mult__1__expected));
            VL_STOP_MT("test_wgt.sv", 35, "");
        }
    }
    __Vtask_test_wgt__DOT__test_gamma_mult__2__expected = 0x10U;
    __Vtask_test_wgt__DOT__test_gamma_mult__2__x = 0x15U;
    vlSelfRef.test_wgt__DOT__gamma_in = __Vtask_test_wgt__DOT__test_gamma_mult__2__x;
    vlSelfRef.test_wgt__DOT__gamma_expected = __Vtask_test_wgt__DOT__test_gamma_mult__2__expected;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__gamma_out) 
                          != (IData)(__Vtask_test_wgt__DOT__test_gamma_mult__2__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:35: Assertion failed in %Ntest_wgt.test_gamma_mult: Gamma_mult test failed: input=%b, got=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_gamma_mult__2__x),
                         5,vlSelfRef.test_wgt__DOT__gamma_out,
                         5,(IData)(__Vtask_test_wgt__DOT__test_gamma_mult__2__expected));
            VL_STOP_MT("test_wgt.sv", 35, "");
        }
    }
    VL_WRITEF_NX("Testing WGT1_5 module...\n",0);
    __Vtask_test_wgt__DOT__test_wgt1_5__3__expected = 1U;
    __Vtask_test_wgt__DOT__test_wgt1_5__3__addr = 0U;
    vlSelfRef.test_wgt__DOT__wgt1_address = __Vtask_test_wgt__DOT__test_wgt1_5__3__addr;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__wgt1_output) 
                          != (IData)(__Vtask_test_wgt__DOT__test_wgt1_5__3__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:54: Assertion failed in %Ntest_wgt.test_wgt1_5: WGT1_5 test failed: address=%b, output=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_wgt1_5__3__addr),
                         1,vlSelfRef.test_wgt__DOT__wgt1_output,
                         1,(IData)(__Vtask_test_wgt__DOT__test_wgt1_5__3__expected));
            VL_STOP_MT("test_wgt.sv", 54, "");
        }
    }
    __Vtask_test_wgt__DOT__test_wgt1_5__4__expected = 0U;
    __Vtask_test_wgt__DOT__test_wgt1_5__4__addr = 1U;
    vlSelfRef.test_wgt__DOT__wgt1_address = __Vtask_test_wgt__DOT__test_wgt1_5__4__addr;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__wgt1_output) 
                          != (IData)(__Vtask_test_wgt__DOT__test_wgt1_5__4__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:54: Assertion failed in %Ntest_wgt.test_wgt1_5: WGT1_5 test failed: address=%b, output=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_wgt1_5__4__addr),
                         1,vlSelfRef.test_wgt__DOT__wgt1_output,
                         1,(IData)(__Vtask_test_wgt__DOT__test_wgt1_5__4__expected));
            VL_STOP_MT("test_wgt.sv", 54, "");
        }
    }
    __Vtask_test_wgt__DOT__test_wgt1_5__5__expected = 1U;
    __Vtask_test_wgt__DOT__test_wgt1_5__5__addr = 2U;
    vlSelfRef.test_wgt__DOT__wgt1_address = __Vtask_test_wgt__DOT__test_wgt1_5__5__addr;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__wgt1_output) 
                          != (IData)(__Vtask_test_wgt__DOT__test_wgt1_5__5__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:54: Assertion failed in %Ntest_wgt.test_wgt1_5: WGT1_5 test failed: address=%b, output=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_wgt1_5__5__addr),
                         1,vlSelfRef.test_wgt__DOT__wgt1_output,
                         1,(IData)(__Vtask_test_wgt__DOT__test_wgt1_5__5__expected));
            VL_STOP_MT("test_wgt.sv", 54, "");
        }
    }
    VL_WRITEF_NX("Testing WGT2_5 module...\n",0);
    __Vtask_test_wgt__DOT__test_wgt2_5__6__expected = 1U;
    __Vtask_test_wgt__DOT__test_wgt2_5__6__addr = 0U;
    vlSelfRef.test_wgt__DOT__wgt2_address = __Vtask_test_wgt__DOT__test_wgt2_5__6__addr;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__wgt2_output) 
                          != (IData)(__Vtask_test_wgt__DOT__test_wgt2_5__6__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:73: Assertion failed in %Ntest_wgt.test_wgt2_5: WGT2_5 test failed: address=%b, output=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_wgt2_5__6__addr),
                         1,vlSelfRef.test_wgt__DOT__wgt2_output,
                         1,(IData)(__Vtask_test_wgt__DOT__test_wgt2_5__6__expected));
            VL_STOP_MT("test_wgt.sv", 73, "");
        }
    }
    __Vtask_test_wgt__DOT__test_wgt2_5__7__expected = 0U;
    __Vtask_test_wgt__DOT__test_wgt2_5__7__addr = 1U;
    vlSelfRef.test_wgt__DOT__wgt2_address = __Vtask_test_wgt__DOT__test_wgt2_5__7__addr;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__wgt2_output) 
                          != (IData)(__Vtask_test_wgt__DOT__test_wgt2_5__7__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:73: Assertion failed in %Ntest_wgt.test_wgt2_5: WGT2_5 test failed: address=%b, output=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_wgt2_5__7__addr),
                         1,vlSelfRef.test_wgt__DOT__wgt2_output,
                         1,(IData)(__Vtask_test_wgt__DOT__test_wgt2_5__7__expected));
            VL_STOP_MT("test_wgt.sv", 73, "");
        }
    }
    __Vtask_test_wgt__DOT__test_wgt2_5__8__expected = 1U;
    __Vtask_test_wgt__DOT__test_wgt2_5__8__addr = 2U;
    vlSelfRef.test_wgt__DOT__wgt2_address = __Vtask_test_wgt__DOT__test_wgt2_5__8__addr;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_wgt.sv", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_wgt__DOT__wgt2_output) 
                          != (IData)(__Vtask_test_wgt__DOT__test_wgt2_5__8__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_wgt.sv:73: Assertion failed in %Ntest_wgt.test_wgt2_5: WGT2_5 test failed: address=%b, output=%b, expected=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(__Vtask_test_wgt__DOT__test_wgt2_5__8__addr),
                         1,vlSelfRef.test_wgt__DOT__wgt2_output,
                         1,(IData)(__Vtask_test_wgt__DOT__test_wgt2_5__8__expected));
            VL_STOP_MT("test_wgt.sv", 73, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test_wgt.sv", 
                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("All WGT tests completed!\n",0);
    VL_FINISH_MT("test_wgt.sv", 111, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_wgt___024root___dump_triggers__act(Vtest_wgt___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_wgt___024root___eval_triggers__act(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_triggers__act\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_wgt___024root___dump_triggers__act(vlSelf);
    }
#endif
}
