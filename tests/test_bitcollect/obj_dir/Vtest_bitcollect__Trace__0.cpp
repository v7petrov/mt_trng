// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_bitcollect__Syms.h"


void Vtest_bitcollect___024root__trace_chg_0_sub_0(Vtest_bitcollect___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_bitcollect___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_chg_0\n"); );
    // Init
    Vtest_bitcollect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bitcollect___024root*>(voidSelf);
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_bitcollect___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_bitcollect___024root__trace_chg_0_sub_0(Vtest_bitcollect___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_chg_0_sub_0\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))));
        bufp->chgBit(oldp+1,((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))));
        bufp->chgBit(oldp+2,((1U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))));
        bufp->chgBit(oldp+3,((1U & vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+4,((1U & (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+5,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s),5);
        bufp->chgCData(oldp+6,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state),3);
        bufp->chgCData(oldp+7,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+8,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+9,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+10,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+11,((((0x10U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+12,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+13,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+14,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+15,(((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+16,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C0),5);
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                     ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                               & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+20,(((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                                ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                                : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                               & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+23,(((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                                ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                                : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in))));
        bufp->chgCData(oldp+24,((((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U)))) 
                                 ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s))),5);
        bufp->chgCData(oldp+25,(((((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s)) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5))))),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+26,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce));
        bufp->chgBit(oldp+27,((1U & (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+28,(vlSelfRef.test_bitcollect__DOT__byte_ready));
        bufp->chgCData(oldp+29,(vlSelfRef.test_bitcollect__DOT__rand_byte),8);
        bufp->chgCData(oldp+30,(vlSelfRef.test_bitcollect__DOT__collector__DOT__shift_reg),8);
        bufp->chgCData(oldp+31,(vlSelfRef.test_bitcollect__DOT__collector__DOT__bit_count),3);
        bufp->chgCData(oldp+32,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+33,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+34,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+35,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+36,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+37,(((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                  ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U))))),5);
        bufp->chgCData(oldp+38,((((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 4U)) 
                                  | ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & (((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                               ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                              << 2U)))) 
                                 | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 1U)))),5);
        bufp->chgBit(oldp+39,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+40,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)))),5);
    }
    bufp->chgBit(oldp+41,(vlSelfRef.test_bitcollect__DOT__clk));
    bufp->chgBit(oldp+42,(vlSelfRef.test_bitcollect__DOT__rst));
    bufp->chgBit(oldp+43,(vlSelfRef.test_bitcollect__DOT__trng_d1));
    bufp->chgBit(oldp+44,(vlSelfRef.test_bitcollect__DOT__trng_d2));
    bufp->chgCData(oldp+45,(vlSelfRef.test_bitcollect__DOT__trng_d3),5);
    bufp->chgBit(oldp+46,(((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                            ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d1)
                            : ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                                ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                                : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in)))));
    bufp->chgBit(oldp+47,(((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                            ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d2)
                            : ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                                ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                   & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                                : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in)))));
    bufp->chgCData(oldp+48,(((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                              ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d3)
                              : ((((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s)) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)))))),5);
}

void Vtest_bitcollect___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_cleanup\n"); );
    // Init
    Vtest_bitcollect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bitcollect___024root*>(voidSelf);
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
