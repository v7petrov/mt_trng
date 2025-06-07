// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes.h for the primary calling header

#include "Vtest_aes__pch.h"
#include "Vtest_aes__Syms.h"
#include "Vtest_aes___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__act(Vtest_aes___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_aes___024root___eval_triggers__act(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_triggers__act\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.ramfsm_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ramfsm_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.ramfsm_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ramfsm_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.ramfsm_tb__DOT__done) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ramfsm_tb__DOT__done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__ramfsm_tb__DOT__clk__0 
        = vlSelfRef.ramfsm_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ramfsm_tb__DOT__done__0 
        = vlSelfRef.ramfsm_tb__DOT__done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_aes___024root___dump_triggers__act(vlSelf);
    }
#endif
}
