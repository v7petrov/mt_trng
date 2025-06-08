// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_simon__Syms.h"


VL_ATTR_COLD void Vtest_simon___024root__trace_full_0_sub_1(Vtest_simon___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root__trace_full_0_sub_1\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1391,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 4U)) 
                                 | ((8U & ((0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                           << 3U)) 
                                    | (4U & (((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                             << 2U)))) 
                                | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 1U)))),5);
    bufp->fullBit(oldp+1392,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
    bufp->fullCData(oldp+1393,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
    bufp->fullBit(oldp+1394,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    bufp->fullBit(oldp+1395,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en))));
    bufp->fullBit(oldp+1396,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
    bufp->fullBit(oldp+1397,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1398,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1399,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1400,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
    bufp->fullBit(oldp+1401,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
    bufp->fullBit(oldp+1402,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
    bufp->fullCData(oldp+1403,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s),5);
    bufp->fullBit(oldp+1404,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en));
    bufp->fullCData(oldp+1405,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
    bufp->fullCData(oldp+1406,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
    bufp->fullIData(oldp+1407,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
    bufp->fullBit(oldp+1408,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1409,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
    bufp->fullBit(oldp+1410,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1411,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
    bufp->fullBit(oldp+1412,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                              || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                         ^ (0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                   : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
    bufp->fullBit(oldp+1413,((1U & (0x2778a365U >> 
                                    (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                      | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 7U))) 
                                     | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 6U)) 
                                        | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1414,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 0xbU)) 
                                 | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 7U))) 
                                | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 6U)) | 
                                   (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 4U))))),5);
    bufp->fullSData(oldp+1415,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
    bufp->fullBit(oldp+1416,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1417,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
    bufp->fullBit(oldp+1418,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1419,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
    bufp->fullBit(oldp+1420,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                              && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                         ^ (0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                   : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
    bufp->fullBit(oldp+1421,((1U & (0x2778a365U >> 
                                    ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 8U)) 
                                     | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 6U)) 
                                        | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1422,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 8U)) | 
                                ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 6U)) | 
                                 (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                        >> 4U))))),5);
    bufp->fullCData(oldp+1423,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? 0xaU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
    bufp->fullCData(oldp+1424,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
    bufp->fullCData(oldp+1425,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
    bufp->fullCData(oldp+1426,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
    bufp->fullCData(oldp+1427,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
    bufp->fullCData(oldp+1428,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
    bufp->fullCData(oldp+1429,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
    bufp->fullCData(oldp+1430,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U))))),5);
    bufp->fullCData(oldp+1431,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U)))) 
                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s))),5);
    bufp->fullCData(oldp+1432,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U)))) 
                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                ^ (1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
    bufp->fullCData(oldp+1433,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 4U)) 
                                 | ((8U & ((0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                           << 3U)) 
                                    | (4U & (((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                             << 2U)))) 
                                | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 1U)))),5);
    bufp->fullBit(oldp+1434,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
    bufp->fullCData(oldp+1435,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
    bufp->fullBit(oldp+1436,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    bufp->fullSData(oldp+1437,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_i),16);
    bufp->fullSData(oldp+1438,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp),16);
    bufp->fullSData(oldp+1439,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp2),16);
    bufp->fullSData(oldp+1440,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror3),16);
    bufp->fullSData(oldp+1441,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror1),16);
    bufp->fullCData(oldp+1442,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__index),8);
    bufp->fullIData(oldp+1443,(vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire),32);
    bufp->fullBit(oldp+1444,((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))));
    bufp->fullBit(oldp+1445,(vlSelfRef.test_simon__DOT__dut__DOT__pB_ack));
    bufp->fullIData(oldp+1446,(vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out),32);
    bufp->fullCData(oldp+1447,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state),2);
    bufp->fullCData(oldp+1448,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter),8);
    bufp->fullCData(oldp+1449,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i),7);
    bufp->fullBit(oldp+1450,(vlSelfRef.test_simon__DOT__clk));
    bufp->fullBit(oldp+1451,(((~ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__rng_write_strobe)) 
                              & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram1_reg) 
                                 | (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram2_reg)))));
    bufp->fullBit(oldp+1452,(((~ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__port_choice)) 
                              & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2))));
    bufp->fullBit(oldp+1453,(((IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2) 
                              & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__port_choice))));
    bufp->fullIData(oldp+1454,(((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                 ? vlSelfRef.test_simon__DOT__plaintext
                                 : vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y)),32);
    bufp->fullIData(oldp+1455,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y),32);
    bufp->fullSData(oldp+1456,((0xffffU & ((4U > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
                                            ? (IData)(
                                                      (vlSelfRef.test_simon__DOT__dut__DOT__simon_key 
                                                       >> 
                                                       (0x3fU 
                                                        & ((VL_SHIFTL_III(6,6,32, 
                                                                          ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)), 4U) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0xfU)))))
                                            : vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                           [(0x1fU 
                                             & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))]))),16);
    bufp->fullQData(oldp+1457,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in),64);
    bufp->fullIData(oldp+1459,((((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                 & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state)))
                                 ? vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y
                                 : ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                     ? vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire
                                     : 0U))),32);
}
