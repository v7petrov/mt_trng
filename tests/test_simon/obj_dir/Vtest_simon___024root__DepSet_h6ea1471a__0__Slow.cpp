// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon__Syms.h"
#include "Vtest_simon___024root.h"

VL_ATTR_COLD void Vtest_simon___024root___eval_initial__TOP(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_initial__TOP\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696d6f6eU;
    __Vtemp_1[2U] = 0x73745f73U;
    __Vtemp_1[3U] = 0x7465U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__stl(Vtest_simon___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_simon___024root___eval_triggers__stl(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_triggers__stl\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_simon___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon___024root____Vm_traceActivitySetAll(Vtest_simon___024root* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
VL_ATTR_COLD void Vtest_simon___024root___stl_sequent__TOP__0(Vtest_simon___024root* vlSelf);

VL_ATTR_COLD void Vtest_simon___024root___eval_stl(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_stl\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst));
        Vtest_simon___024root____Vm_traceActivitySetAll(vlSelf);
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst));
        Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst));
        Vtest_simon___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtest_simon__ConstPool__TABLE_hc60ca385_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtest_simon__ConstPool__TABLE_hd20cd422_0;

VL_ATTR_COLD void Vtest_simon___024root___stl_sequent__TOP__0(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___stl_sequent__TOP__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4;
    test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.test_simon__DOT__cipher_en) 
                     << 3U) | (((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                << 2U) | (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state)));
    vlSelfRef.test_simon__DOT__dut__DOT__next_state 
        = Vtest_simon__ConstPool__TABLE_hc60ca385_0
        [__Vtableidx1];
    vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en 
        = Vtest_simon__ConstPool__TABLE_hd20cd422_0
        [__Vtableidx1];
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state 
        = ((IData)(vlSelfRef.test_simon__DOT__rst) ? 0U
            : (((0U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__simon_en_reg))
                ? 1U : ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                         ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                  & (0x1fU > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                  ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                           & (0x1fU 
                                              <= (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                           ? 3U : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                                    ? 3U
                                                    : 0U))))));
    test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4 
        = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
           + (2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)));
    vlSelfRef.test_simon__DOT__dut__DOT__pB_addr = 
        (0x1ffU & ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))
                    ? (IData)(vlSelfRef.test_simon__DOT__key_addr)
                    : ((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))
                        ? ((IData)(4U) + (IData)(vlSelfRef.test_simon__DOT__key_addr))
                        : 0U)));
    vlSelfRef.test_simon__DOT__dut__DOT__simon_key 
        = (((QData)((IData)(vlSelfRef.test_simon__DOT__dut__DOT__key_part2)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.test_simon__DOT__dut__DOT__key_part1)));
    vlSelfRef.test_simon__DOT__dut__DOT__rng_gen__DOT__o_valid_bus 
        = ((((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en)) 
                << 0x1fU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en)) 
                             << 0x1eU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x1bU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x1aU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x19U) 
                                             | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x17U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x16U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x15U) 
                                             | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x14U))) 
               | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0x13U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en)) 
                                 << 0x12U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x11U) 
                                               | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0xfU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 0xeU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0xdU) 
                                           | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0xcU))) 
               | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0xbU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 0xaU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 9U) 
                                             | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 8U)))) 
              | ((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 7U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 6U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 5U) | 
                                         (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 4U))) 
                 | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                       & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en)) 
                      << 3U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 2U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 1U) 
                                           | ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en)))))));
    if ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter = 0U;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i = 0U;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter 
            = (0xffU & test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4);
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i 
            = (0x7fU & test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4);
    }
    if ((0x100U & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr))) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__key_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram2_dout;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__key_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram1_dout;
    }
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
        = ((4U > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
            ? vlSelfRef.test_simon__DOT__dut__DOT__simon_key
            : (((QData)((IData)(((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                  [(0x1fU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))] 
                                  << 0x10U) | vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                 [(0x1fU & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                            - (IData)(1U)))]))) 
                << 0x20U) | (QData)((IData)(((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                              [(0x1fU 
                                                & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                                   - (IData)(2U)))] 
                                              << 0x10U) 
                                             | vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                             [(0x1fU 
                                               & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                                  - (IData)(3U)))])))));
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y 
        = ((0xffff0000U & ((((0xfffe0000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             << 1U)) 
                             | (0x10000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                            >> 0xfU))) 
                            & ((0xff000000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                               << 8U)) 
                               | (0xff0000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                               >> 8U)))) 
                           ^ ((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                               << 0x10U) ^ (((0xfffc0000U 
                                              & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                                 << 2U)) 
                                             | (0x30000U 
                                                & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                                   >> 0xeU))) 
                                            ^ (((4U 
                                                 > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
                                                 ? (IData)(
                                                           (vlSelfRef.test_simon__DOT__dut__DOT__simon_key 
                                                            >> 
                                                            (0x3fU 
                                                             & ((VL_SHIFTL_III(6,6,32, 
                                                                               ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)), 4U) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(0xfU)))))
                                                 : 
                                                vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                                [(0x1fU 
                                                  & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))]) 
                                               << 0x10U))))) 
           | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
              >> 0x10U));
    vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe 
        = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_active) 
           & (0xffffffffU == vlSelfRef.test_simon__DOT__dut__DOT__rng_gen__DOT__o_valid_bus));
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_ciphertext 
        = (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
            & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state)))
            ? vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y
            : ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                ? vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire
                : 0U));
    vlSelfRef.test_simon__DOT__dut__DOT__ram1_din = 
        ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe)
          ? (((((((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                  << 0x1fU) | (0x40000000U & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x1eU))) 
                | ((0x20000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0x1dU)) | (0x10000000U 
                                                 & ((0x2778a365U 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                    << 0x1cU)))) 
               | (((0x8000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0x1bU)) | (0x4000000U 
                                                & ((0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0x1aU))) 
                  | ((0x2000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x19U)) | (0x1000000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x18U))))) 
              | ((((0x800000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 0x17U)) | (0x400000U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0x16U))) 
                  | ((0x200000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0x15U)) | (0x100000U 
                                                 & ((0x2778a365U 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                    << 0x14U)))) 
                 | (((0x80000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0x13U)) | (0x40000U 
                                                & ((0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0x12U))) 
                    | ((0x20000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x11U)) | (0x10000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x10U)))))) 
             | (((((0x8000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                               << 0xfU)) | (0x4000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xeU))) 
                  | ((0x2000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 0xdU)) | (0x1000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0xcU)))) 
                 | (((0x800U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                << 0xbU)) | (0x400U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0xaU))) 
                    | ((0x200U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 9U)) | (0x100U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 8U))))) 
                | ((((0x80U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                               << 7U)) | (0x40U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 6U))) 
                    | ((0x20U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 5U)) | (0x10U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 4U)))) 
                   | (((8U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                              << 3U)) | (4U & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 2U))) 
                      | ((2U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                << 1U)) | (1U & (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))))
          : 0U);
}
