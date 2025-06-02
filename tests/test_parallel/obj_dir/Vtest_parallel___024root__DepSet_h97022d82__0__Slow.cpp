// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel__Syms.h"
#include "Vtest_parallel___024root.h"

VL_ATTR_COLD void Vtest_parallel___024root___eval_initial__TOP(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_initial__TOP\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x656c3332U;
    __Vtemp_1[2U] = 0x72616c6cU;
    __Vtemp_1[3U] = 0x675f7061U;
    __Vtemp_1[4U] = 0x5f74726eU;
    __Vtemp_1[5U] = 0x74657374U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__stl(Vtest_parallel___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_parallel___024root___eval_triggers__stl(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_triggers__stl\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_parallel___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
VL_ATTR_COLD void Vtest_parallel___024root____Vm_traceActivitySetAll(Vtest_parallel___024root* vlSelf);

VL_ATTR_COLD void Vtest_parallel___024root___eval_stl(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_stl\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst));
        Vtest_parallel___024root____Vm_traceActivitySetAll(vlSelf);
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst));
        Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst));
    }
}
