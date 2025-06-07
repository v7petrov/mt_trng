// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_fsm__Syms.h"


void Vtest_fsm___024root__trace_chg_0_sub_0(Vtest_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_fsm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_chg_0\n"); );
    // Init
    Vtest_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_fsm___024root*>(voidSelf);
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_fsm___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_fsm___024root__trace_chg_0_sub_0(Vtest_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_chg_0_sub_0\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))));
        bufp->chgBit(oldp+1,((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))));
        bufp->chgBit(oldp+2,((1U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))));
        bufp->chgBit(oldp+3,(vlSelfRef.test_fsm__DOT__fsm_nlfsr3_ce));
        bufp->chgBit(oldp+4,(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__output_en));
        bufp->chgCData(oldp+5,(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state),3);
        bufp->chgCData(oldp+6,(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt),6);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.test_fsm__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.test_fsm__DOT__rst));
}

void Vtest_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_cleanup\n"); );
    // Init
    Vtest_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_fsm___024root*>(voidSelf);
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
