// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes.h for the primary calling header

#include "Vtest_aes__pch.h"
#include "Vtest_aes__Syms.h"
#include "Vtest_aes___024root.h"

VL_ATTR_COLD void Vtest_aes___024root___eval_initial__TOP(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_initial__TOP\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.ramfsm_tb__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f66736dU;
    __Vtemp_1[2U] = 0x74657374U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__stl(Vtest_aes___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_aes___024root___eval_triggers__stl(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_triggers__stl\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_aes___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
