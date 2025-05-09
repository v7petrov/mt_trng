// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_nlfsr.h for the primary calling header

#include "Vtest_nlfsr__pch.h"
#include "Vtest_nlfsr__Syms.h"
#include "Vtest_nlfsr___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__0(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_nlfsr__DOT__clk = 0U;
    vlSelfRef.test_nlfsr__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__rst = 1U;
    vlSelfRef.test_nlfsr__DOT__warbler_o1 = 1U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1 = 0U;
    vlSelfRef.test_nlfsr__DOT__d1 = 0U;
    vlSelfRef.test_nlfsr__DOT__init1 = 1U;
    vlSelfRef.test_nlfsr__DOT__load1 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__rst = 0U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__init1 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__init1 = 1U;
    vlSelfRef.test_nlfsr__DOT__d1 = 1U;
    vlSelfRef.test_nlfsr__DOT__load1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__load1 = 0U;
    vlSelfRef.test_nlfsr__DOT__init1 = 0U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__load1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.test_nlfsr__DOT__warbler_o1) 
                          == (1U & vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_nlfsr.sv:86: Assertion failed in %Ntest_nlfsr.test_nlfsr1: NLFSR1 test failed\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_nlfsr.sv", 86, "");
        }
    }
    vlSelfRef.test_nlfsr__DOT__rst = 1U;
    vlSelfRef.test_nlfsr__DOT__warbler_o2 = 0U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce2 = 0U;
    vlSelfRef.test_nlfsr__DOT__d2 = 0U;
    vlSelfRef.test_nlfsr__DOT__init2 = 1U;
    vlSelfRef.test_nlfsr__DOT__load2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__rst = 0U;
    vlSelfRef.test_nlfsr__DOT__load2 = 1U;
    vlSelfRef.test_nlfsr__DOT__d2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__load2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__init2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__init2 = 0U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__rst = 1U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce3 = 0U;
    vlSelfRef.test_nlfsr__DOT__load3 = 0U;
    vlSelfRef.test_nlfsr__DOT__init3 = 1U;
    vlSelfRef.test_nlfsr__DOT__d3 = 0xaU;
    vlSelfRef.test_nlfsr__DOT__tk = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__rst = 0U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__init3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__load3 = 1U;
    vlSelfRef.test_nlfsr__DOT__d3 = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__load3 = 0U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_nlfsr__DOT__nlfsr3_ce3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "test_nlfsr.sv", 
                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("test_nlfsr.sv", 155, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_nlfsr___024root___dump_triggers__act(Vtest_nlfsr___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_nlfsr___024root___eval_triggers__act(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_triggers__act\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_nlfsr__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_nlfsr__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.test_nlfsr__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_nlfsr__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_nlfsr__DOT__clk__0 
        = vlSelfRef.test_nlfsr__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_nlfsr__DOT__rst__0 
        = vlSelfRef.test_nlfsr__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_nlfsr___024root___dump_triggers__act(vlSelf);
    }
#endif
}
