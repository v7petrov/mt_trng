// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon_trng.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vtest_simon__ConstPool__TABLE_heab3c15f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtest_simon__ConstPool__TABLE_h586c1205_0;

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx1 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx2];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx3];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx4];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx4];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx5 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx5];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx5];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx6];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx6];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx7];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx7];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx8 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx8];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx8];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx9 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx9];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx9];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx10 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx10];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx10];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx11 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx11];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx11];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx12 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx12];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx12];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx13 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx13];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx13];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx14 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx14];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx14];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx15 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx15];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx15];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx16 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx16];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx16];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx17 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx17];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx17];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx18 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx18];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx18];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx19 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx19];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx19];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx20 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx20];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx20];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx21 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx21];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx21];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx22 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx22];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx22];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx23 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx23];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx23];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx24 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx24];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx24];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx25 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx25];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx25];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx26 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx26];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx26];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx27 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx27];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx27];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx28 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx28];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx28];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx29 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx29];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx29];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx30 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx30];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx30];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx31 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx31];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx31];
}

VL_ATTR_COLD void Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___stl_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.__PVT__nlfsr1__DOT__mux1_in = (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    (((0x10U 
                                                       & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                          >> 0xbU)) 
                                                      | (8U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 7U))) 
                                                     | ((6U 
                                                         & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                              >> 4U)))))));
    vlSelfRef.__PVT__nlfsr2__DOT__mux1_in = (1U & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                   ^ 
                                                   (0x2778a365U 
                                                    >> 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                         >> 8U)) 
                                                     | ((0xeU 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                              >> 4U)))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
    __Vtableidx32 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx32];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx32];
}

VL_ATTR_COLD void Vtest_simon_trng___ctor_var_reset(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___ctor_var_reset\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->d1 = VL_RAND_RESET_I(1);
    vlSelf->d2 = VL_RAND_RESET_I(1);
    vlSelf->d3 = VL_RAND_RESET_I(5);
    vlSelf->o_valid = VL_RAND_RESET_I(1);
    vlSelf->o_warbler = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nlfsr3_ce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s = VL_RAND_RESET_I(5);
    vlSelf->__PVT__output_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fsm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fsm__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__nlfsr1__DOT__a = VL_RAND_RESET_I(17);
    vlSelf->__PVT__nlfsr1__DOT__mux1_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nlfsr2__DOT__b = VL_RAND_RESET_I(16);
    vlSelf->__PVT__nlfsr2__DOT__mux1_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nlfsr3__DOT__C5 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__nlfsr3__DOT__C4 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__nlfsr3__DOT__C3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__nlfsr3__DOT__C2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__nlfsr3__DOT__C1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__nlfsr3__DOT__C0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__nlfsr3__DOT__wgt2_5o = VL_RAND_RESET_I(1);
    vlSelf->nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = VL_RAND_RESET_I(1);
}
