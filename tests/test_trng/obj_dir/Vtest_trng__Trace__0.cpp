// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_trng__Syms.h"


void Vtest_trng___024root__trace_chg_0_sub_0(Vtest_trng___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_trng___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_chg_0\n"); );
    // Init
    Vtest_trng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_trng___024root*>(voidSelf);
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_trng___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_trng___024root__trace_chg_0_sub_0(Vtest_trng___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_chg_0_sub_0\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test_trng__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.test_trng__DOT__trng_d1));
        bufp->chgBit(oldp+2,(vlSelfRef.test_trng__DOT__trng_d2));
        bufp->chgCData(oldp+3,(vlSelfRef.test_trng__DOT__trng_d3),5);
        bufp->chgBit(oldp+4,(vlSelfRef.test_trng__DOT__prev_warbler));
        bufp->chgBit(oldp+5,(vlSelfRef.test_trng__DOT__changed));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+6,(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce));
        bufp->chgBit(oldp+7,((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)))));
        bufp->chgBit(oldp+8,((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))));
        bufp->chgBit(oldp+9,((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))));
        bufp->chgBit(oldp+10,((1U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))));
        bufp->chgBit(oldp+11,((1U & vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a)));
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b))));
        bufp->chgCData(oldp+13,(vlSelfRef.test_trng__DOT__trng_inst__DOT__s),5);
        bufp->chgCData(oldp+14,(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state),3);
        bufp->chgCData(oldp+15,(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt),6);
        bufp->chgIData(oldp+16,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a),17);
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
        bufp->chgBit(oldp+18,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                               & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
        bufp->chgBit(oldp+20,(((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                                ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                                : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in))));
        bufp->chgBit(oldp+21,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+22,((((0x10U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+23,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b),16);
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
        bufp->chgBit(oldp+25,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in));
        bufp->chgBit(oldp+26,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                               & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
        bufp->chgBit(oldp+27,(((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                                ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                                : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in))));
        bufp->chgBit(oldp+28,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+29,(((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+30,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5),5);
        bufp->chgCData(oldp+31,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C4),5);
        bufp->chgCData(oldp+32,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C3),5);
        bufp->chgCData(oldp+33,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C2),5);
        bufp->chgCData(oldp+34,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1),5);
        bufp->chgCData(oldp+35,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C0),5);
        bufp->chgBit(oldp+36,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))));
        bufp->chgCData(oldp+37,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))),5);
        bufp->chgCData(oldp+38,((((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 4U)) 
                                  | ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & (((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                               ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                              << 2U)))) 
                                 | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 1U)))),5);
        bufp->chgCData(oldp+39,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5))))),5);
        bufp->chgCData(oldp+40,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                  ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U))))),5);
        bufp->chgCData(oldp+41,((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))) 
                                 ^ ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))))),5);
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                     ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b)))));
    }
    bufp->chgBit(oldp+43,(vlSelfRef.test_trng__DOT__clk));
    bufp->chgBit(oldp+44,(((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                            ? (IData)(vlSelfRef.test_trng__DOT__trng_d1)
                            : ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                                ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                                : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in)))));
    bufp->chgBit(oldp+45,(((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                            ? (IData)(vlSelfRef.test_trng__DOT__trng_d2)
                            : ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                                ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                                : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in)))));
    bufp->chgCData(oldp+46,(((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                              ? (IData)(vlSelfRef.test_trng__DOT__trng_d3)
                              : (((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))) 
                                 ^ ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U))))))),5);
}

void Vtest_trng___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_cleanup\n"); );
    // Init
    Vtest_trng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_trng___024root*>(voidSelf);
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
