// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_parallel__Syms.h"


VL_ATTR_COLD void Vtest_parallel___024root__trace_full_0_sub_1(Vtest_parallel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root__trace_full_0_sub_1\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1304,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U)))) 
                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                ^ (1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
    bufp->fullCData(oldp+1305,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 4U)) 
                                 | ((8U & ((0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                           << 3U)) 
                                    | (4U & (((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                             << 2U)))) 
                                | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 1U)))),5);
    bufp->fullBit(oldp+1306,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
    bufp->fullCData(oldp+1307,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
    bufp->fullBit(oldp+1308,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    bufp->fullBit(oldp+1309,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
    bufp->fullBit(oldp+1310,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
    bufp->fullBit(oldp+1311,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1312,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1313,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1314,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
    bufp->fullBit(oldp+1315,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
    bufp->fullCData(oldp+1316,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s),5);
    bufp->fullCData(oldp+1317,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
    bufp->fullCData(oldp+1318,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
    bufp->fullIData(oldp+1319,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
    bufp->fullBit(oldp+1320,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1321,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
    bufp->fullBit(oldp+1322,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1323,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
    bufp->fullBit(oldp+1324,((1U & (0x2778a365U >> 
                                    (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                      | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 7U))) 
                                     | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 6U)) 
                                        | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1325,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 0xbU)) 
                                 | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 7U))) 
                                | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 6U)) | 
                                   (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 4U))))),5);
    bufp->fullSData(oldp+1326,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
    bufp->fullBit(oldp+1327,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1328,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
    bufp->fullBit(oldp+1329,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1330,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
    bufp->fullBit(oldp+1331,((1U & (0x2778a365U >> 
                                    ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 8U)) 
                                     | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 6U)) 
                                        | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1332,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 8U)) | 
                                ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 6U)) | 
                                 (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                        >> 4U))))),5);
    bufp->fullCData(oldp+1333,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
    bufp->fullCData(oldp+1334,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
    bufp->fullCData(oldp+1335,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
    bufp->fullCData(oldp+1336,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
    bufp->fullCData(oldp+1337,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
    bufp->fullCData(oldp+1338,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
    bufp->fullCData(oldp+1339,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U))))),5);
    bufp->fullCData(oldp+1340,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U)))) 
                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s))),5);
    bufp->fullCData(oldp+1341,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U)))) 
                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                ^ (1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
    bufp->fullCData(oldp+1342,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 4U)) 
                                 | ((8U & ((0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                           << 3U)) 
                                    | (4U & (((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                             << 2U)))) 
                                | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 1U)))),5);
    bufp->fullBit(oldp+1343,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
    bufp->fullCData(oldp+1344,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
    bufp->fullBit(oldp+1345,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    bufp->fullBit(oldp+1346,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
    bufp->fullBit(oldp+1347,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
    bufp->fullBit(oldp+1348,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1349,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1350,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1351,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
    bufp->fullBit(oldp+1352,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
    bufp->fullCData(oldp+1353,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s),5);
    bufp->fullCData(oldp+1354,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
    bufp->fullCData(oldp+1355,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
    bufp->fullIData(oldp+1356,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
    bufp->fullBit(oldp+1357,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1358,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
    bufp->fullBit(oldp+1359,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1360,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
    bufp->fullBit(oldp+1361,((1U & (0x2778a365U >> 
                                    (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                      | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 7U))) 
                                     | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 6U)) 
                                        | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1362,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 0xbU)) 
                                 | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 7U))) 
                                | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 6U)) | 
                                   (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 4U))))),5);
    bufp->fullSData(oldp+1363,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
    bufp->fullBit(oldp+1364,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1365,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
    bufp->fullBit(oldp+1366,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1367,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
    bufp->fullBit(oldp+1368,((1U & (0x2778a365U >> 
                                    ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 8U)) 
                                     | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 6U)) 
                                        | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1369,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 8U)) | 
                                ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 6U)) | 
                                 (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                        >> 4U))))),5);
    bufp->fullCData(oldp+1370,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
    bufp->fullCData(oldp+1371,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
    bufp->fullCData(oldp+1372,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
    bufp->fullCData(oldp+1373,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
    bufp->fullCData(oldp+1374,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
    bufp->fullCData(oldp+1375,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
    bufp->fullCData(oldp+1376,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U))))),5);
    bufp->fullCData(oldp+1377,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U)))) 
                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s))),5);
    bufp->fullCData(oldp+1378,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U)))) 
                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                ^ (1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
    bufp->fullCData(oldp+1379,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 4U)) 
                                 | ((8U & ((0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                           << 3U)) 
                                    | (4U & (((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                             << 2U)))) 
                                | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 1U)))),5);
    bufp->fullBit(oldp+1380,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
    bufp->fullCData(oldp+1381,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
    bufp->fullBit(oldp+1382,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    bufp->fullBit(oldp+1383,(vlSelfRef.test_trng_parallel32__DOT__clk));
}
