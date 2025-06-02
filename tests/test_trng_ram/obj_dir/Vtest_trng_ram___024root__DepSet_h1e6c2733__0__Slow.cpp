// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng_ram.h for the primary calling header

#include "Vtest_trng_ram__pch.h"
#include "Vtest_trng_ram__Syms.h"
#include "Vtest_trng_ram___024root.h"

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_initial__TOP(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_initial__TOP\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f72616dU;
    __Vtemp_1[2U] = 0x5f726e67U;
    __Vtemp_1[3U] = 0x74657374U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__stl(Vtest_trng_ram___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_triggers__stl(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_triggers__stl\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_trng_ram___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram___024root____Vm_traceActivitySetAll(Vtest_trng_ram___024root* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram___024root___stl_sequent__TOP__0(Vtest_trng_ram___024root* vlSelf);

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_stl(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_stl\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst));
        Vtest_trng_ram___024root____Vm_traceActivitySetAll(vlSelf);
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___stl_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst));
        Vtest_trng_ram___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_trng_ram___024root___stl_sequent__TOP__0(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___stl_sequent__TOP__0\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0;
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0 = 0;
    CData/*0:0*/ test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1;
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1 = 0;
    // Body
    vlSelfRef.test_rng_ram__DOT__pA_wb_data_o = 0U;
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg) {
        vlSelfRef.test_rng_ram__DOT__pA_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_dout;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg) {
        vlSelfRef.test_rng_ram__DOT__pA_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_dout;
    }
    vlSelfRef.test_rng_ram__DOT__pB_wb_data_o = 0U;
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) {
        vlSelfRef.test_rng_ram__DOT__pB_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_dout;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg) {
        vlSelfRef.test_rng_ram__DOT__pB_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_dout;
    }
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_gen__DOT__o_valid_bus 
        = ((((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en)) 
                << 0x1fU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en)) 
                             << 0x1eU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x1bU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x1aU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x19U) 
                                             | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x17U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x16U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x15U) 
                                             | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x14U))) 
               | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0x13U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en)) 
                                 << 0x12U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x11U) 
                                               | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0xfU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 0xeU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0xdU) 
                                           | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0xcU))) 
               | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0xbU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 0xaU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 9U) 
                                             | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 8U)))) 
              | ((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 7U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 6U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 5U) | 
                                         (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 4U))) 
                 | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                       & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en)) 
                      << 3U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 2U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 1U) 
                                           | ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en)))))));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_active) 
           & (0xffffffffU == vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_gen__DOT__o_valid_bus));
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final = 0xfU;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final 
            = (((((((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                    << 0x1fU) | (0x40000000U & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0x1eU))) 
                  | ((0x20000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                     << 0x1dU)) | (0x10000000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x1cU)))) 
                 | (((0x8000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x1bU)) | (0x4000000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x1aU))) 
                    | ((0x2000000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x19U)) | 
                       (0x1000000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x18U))))) 
                | ((((0x800000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0x17U)) | (0x400000U 
                                                 & ((0x2778a365U 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                    << 0x16U))) 
                    | ((0x200000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                     << 0x15U)) | (0x100000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x14U)))) 
                   | (((0x80000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x13U)) | (0x40000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x12U))) 
                      | ((0x20000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x11U)) | 
                         (0x10000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x10U)))))) 
               | (((((0x8000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0xbU)) | (0x400U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 9U)) | (0x100U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 7U)) | (0x40U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 6U))) 
                      | ((0x20U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 5U)) | (0x10U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 4U)))) 
                     | (((8U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                << 3U)) | (4U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 2U))) 
                        | ((2U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 1U)) | (1U & (0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final 
            = vlSelfRef.test_rng_ram__DOT__addr_rng;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_data_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_addr_i;
    }
    vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe) 
           | ((IData)(vlSelfRef.test_rng_ram__DOT__pA_wb_cyc_i) 
              & (IData)(vlSelfRef.test_rng_ram__DOT__pA_wb_stb_i)));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same 
        = (1U & (~ (((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
                     ^ (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i)) 
                    >> 8U)));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel) 
              & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req)));
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2) 
               & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice))) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel));
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0 
        = ((~ ((~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice)) 
               & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2))) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
               >> 8U)) & (IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2 
        = ((IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
              >> 8U));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i) 
               >> 8U)) & (IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2 
        = ((IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i) 
              >> 8U));
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_data_i;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we = 0U;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & 0U);
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din = 0U;
    }
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_data_i;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we = 0U;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & 0U);
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din = 0U;
    }
}
