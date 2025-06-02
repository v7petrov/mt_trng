// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_trng_ram__Syms.h"


VL_ATTR_COLD void Vtest_trng_ram___024root__trace_full_0_sub_1(Vtest_trng_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root__trace_full_0_sub_1\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1362,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
    bufp->fullBit(oldp+1363,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1364,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1365,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
    bufp->fullBit(oldp+1366,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
    bufp->fullBit(oldp+1367,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
    bufp->fullBit(oldp+1368,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
    bufp->fullCData(oldp+1369,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s),5);
    bufp->fullBit(oldp+1370,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en));
    bufp->fullCData(oldp+1371,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
    bufp->fullCData(oldp+1372,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
    bufp->fullIData(oldp+1373,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
    bufp->fullBit(oldp+1374,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1375,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
    bufp->fullBit(oldp+1376,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1377,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
    bufp->fullBit(oldp+1378,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                              || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                         ^ (0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                   : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
    bufp->fullBit(oldp+1379,((1U & (0x2778a365U >> 
                                    (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                      | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 7U))) 
                                     | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 6U)) 
                                        | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1380,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 0xbU)) 
                                 | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 7U))) 
                                | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 6U)) | 
                                   (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                          >> 4U))))),5);
    bufp->fullSData(oldp+1381,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
    bufp->fullBit(oldp+1382,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1383,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
    bufp->fullBit(oldp+1384,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                 ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+1385,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                               ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                               : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
    bufp->fullBit(oldp+1386,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                              && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                         ^ (0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                   : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
    bufp->fullBit(oldp+1387,((1U & (0x2778a365U >> 
                                    ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 8U)) 
                                     | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 6U)) 
                                        | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 4U))))))));
    bufp->fullCData(oldp+1388,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 8U)) | 
                                ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                          >> 6U)) | 
                                 (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                        >> 4U))))),5);
    bufp->fullCData(oldp+1389,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? 0xaU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
    bufp->fullCData(oldp+1390,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
    bufp->fullCData(oldp+1391,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
    bufp->fullCData(oldp+1392,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
    bufp->fullCData(oldp+1393,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
    bufp->fullCData(oldp+1394,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
    bufp->fullCData(oldp+1395,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
    bufp->fullCData(oldp+1396,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U))))),5);
    bufp->fullCData(oldp+1397,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U)))) 
                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s))),5);
    bufp->fullCData(oldp+1398,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U)))) 
                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                ^ (1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
    bufp->fullCData(oldp+1399,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 4U)) 
                                 | ((8U & ((0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                           << 3U)) 
                                    | (4U & (((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                             << 2U)))) 
                                | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 1U)))),5);
    bufp->fullBit(oldp+1400,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
    bufp->fullCData(oldp+1401,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
    bufp->fullBit(oldp+1402,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    bufp->fullBit(oldp+1403,(vlSelfRef.test_rng_ram__DOT__clk));
    bufp->fullBit(oldp+1404,(((~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe)) 
                              & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg) 
                                 | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg)))));
    bufp->fullBit(oldp+1405,(((~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice)) 
                              & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2))));
    bufp->fullBit(oldp+1406,(((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2) 
                              & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice))));
    bufp->fullBit(oldp+1407,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req));
}
