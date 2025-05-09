// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_wgt__Syms.h"


void Vtest_wgt___024root__trace_chg_0_sub_0(Vtest_wgt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_wgt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_chg_0\n"); );
    // Init
    Vtest_wgt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_wgt___024root*>(voidSelf);
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_wgt___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_wgt___024root__trace_chg_0_sub_0(Vtest_wgt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_chg_0_sub_0\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test_wgt__DOT__rst));
        bufp->chgCData(oldp+1,(vlSelfRef.test_wgt__DOT__gamma_in),5);
        bufp->chgCData(oldp+2,(vlSelfRef.test_wgt__DOT__gamma_expected),5);
        bufp->chgCData(oldp+3,(vlSelfRef.test_wgt__DOT__wgt1_address),5);
        bufp->chgBit(oldp+4,((1U & (0x2778a365U >> (IData)(vlSelfRef.test_wgt__DOT__wgt1_address)))));
        bufp->chgCData(oldp+5,(vlSelfRef.test_wgt__DOT__wgt2_address),5);
        bufp->chgBit(oldp+6,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_wgt__DOT__wgt2_address)))));
    }
    bufp->chgBit(oldp+7,(vlSelfRef.test_wgt__DOT__clk));
    bufp->chgCData(oldp+8,((((0x10U & ((0xfffffff0U 
                                        & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                           << 3U)) 
                                       ^ ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 4U))) 
                             | ((8U & (VL_REDXOR_4(
                                                   (7U 
                                                    & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))) 
                                       << 3U)) | (4U 
                                                  & (((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                      ^ (IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                            | ((2U & ((0x7ffffffeU 
                                       & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                          >> 1U)) ^ 
                                      ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                       << 1U))) | (1U 
                                                   & VL_REDXOR_8(
                                                                 (0x14U 
                                                                  & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))))))),5);
}

void Vtest_wgt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_cleanup\n"); );
    // Init
    Vtest_wgt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_wgt___024root*>(voidSelf);
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
