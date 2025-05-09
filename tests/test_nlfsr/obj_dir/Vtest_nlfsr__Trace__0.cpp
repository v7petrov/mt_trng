// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_nlfsr__Syms.h"


void Vtest_nlfsr___024root__trace_chg_0_sub_0(Vtest_nlfsr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_nlfsr___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root__trace_chg_0\n"); );
    // Init
    Vtest_nlfsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_nlfsr___024root*>(voidSelf);
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_nlfsr___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_nlfsr___024root__trace_chg_0_sub_0(Vtest_nlfsr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root__trace_chg_0_sub_0\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test_nlfsr__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.test_nlfsr__DOT__warbler_o1));
        bufp->chgBit(oldp+2,(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1));
        bufp->chgBit(oldp+3,(vlSelfRef.test_nlfsr__DOT__d1));
        bufp->chgBit(oldp+4,(vlSelfRef.test_nlfsr__DOT__init1));
        bufp->chgBit(oldp+5,(vlSelfRef.test_nlfsr__DOT__load1));
        bufp->chgBit(oldp+6,(vlSelfRef.test_nlfsr__DOT__warbler_o2));
        bufp->chgBit(oldp+7,(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce2));
        bufp->chgBit(oldp+8,(vlSelfRef.test_nlfsr__DOT__d2));
        bufp->chgBit(oldp+9,(vlSelfRef.test_nlfsr__DOT__init2));
        bufp->chgBit(oldp+10,(vlSelfRef.test_nlfsr__DOT__load2));
        bufp->chgBit(oldp+11,(vlSelfRef.test_nlfsr__DOT__load3));
        bufp->chgBit(oldp+12,(vlSelfRef.test_nlfsr__DOT__init3));
        bufp->chgBit(oldp+13,(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce3));
        bufp->chgCData(oldp+14,(vlSelfRef.test_nlfsr__DOT__d3),5);
        bufp->chgCData(oldp+15,(vlSelfRef.test_nlfsr__DOT__tk),5);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in) 
                               ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o1))));
        bufp->chgBit(oldp+17,(((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1) 
                               & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in) 
                                  ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o1)))));
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.test_nlfsr__DOT__init1)
                                ? ((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1) 
                                   & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in) 
                                      ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o1)))
                                : (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.test_nlfsr__DOT__load1)
                                ? (IData)(vlSelfRef.test_nlfsr__DOT__d1)
                                : ((IData)(vlSelfRef.test_nlfsr__DOT__init1)
                                    ? ((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1) 
                                       & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in) 
                                          ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o1)))
                                    : (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in)))));
        bufp->chgBit(oldp+20,(((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in) 
                               ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o2))));
        bufp->chgBit(oldp+21,(((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce2) 
                               & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in) 
                                  ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o2)))));
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.test_nlfsr__DOT__init2)
                                ? ((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce2) 
                                   & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in) 
                                      ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o2)))
                                : (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in))));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.test_nlfsr__DOT__load2)
                                ? (IData)(vlSelfRef.test_nlfsr__DOT__d2)
                                : ((IData)(vlSelfRef.test_nlfsr__DOT__init2)
                                    ? ((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce2) 
                                       & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in) 
                                          ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o2)))
                                    : (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in)))));
        bufp->chgCData(oldp+24,(((IData)(vlSelfRef.test_nlfsr__DOT__tk) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5))))),5);
        bufp->chgCData(oldp+25,((((IData)(vlSelfRef.test_nlfsr__DOT__tk) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)))) 
                                 ^ ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                                ^ (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))))),5);
        bufp->chgCData(oldp+26,(((IData)(vlSelfRef.test_nlfsr__DOT__load3)
                                  ? (IData)(vlSelfRef.test_nlfsr__DOT__d3)
                                  : (((IData)(vlSelfRef.test_nlfsr__DOT__tk) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)))) 
                                     ^ ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                                      ^ (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))))),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+27,((1U & vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a)));
        bufp->chgBit(oldp+28,((1U & (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b))));
        bufp->chgBit(oldp+29,((1U & (0x2778a365U >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1)))));
        bufp->chgIData(oldp+30,(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a),17);
        bufp->chgBit(oldp+31,(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in));
        bufp->chgBit(oldp+32,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+33,((((0x10U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+34,(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b),16);
        bufp->chgBit(oldp+35,(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in));
        bufp->chgBit(oldp+36,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+37,(((0x10U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+38,(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5),5);
        bufp->chgCData(oldp+39,(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C4),5);
        bufp->chgCData(oldp+40,(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C3),5);
        bufp->chgCData(oldp+41,(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C2),5);
        bufp->chgCData(oldp+42,(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1),5);
        bufp->chgCData(oldp+43,(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C0),5);
        bufp->chgBit(oldp+44,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)))));
        bufp->chgCData(oldp+45,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)))),5);
        bufp->chgCData(oldp+46,((((0x10U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 4U)) 
                                  | ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & (((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                               ^ (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                              << 2U)))) 
                                 | (2U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 1U)))),5);
        bufp->chgCData(oldp+47,(((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                                  ^ (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U))))),5);
    }
    bufp->chgBit(oldp+48,(vlSelfRef.test_nlfsr__DOT__clk));
}

void Vtest_nlfsr___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root__trace_cleanup\n"); );
    // Init
    Vtest_nlfsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_nlfsr___024root*>(voidSelf);
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
