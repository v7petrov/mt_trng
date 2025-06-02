// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel_trng.h"

VL_ATTR_COLD void Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___stl_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
}

VL_ATTR_COLD void Vtest_parallel_trng___ctor_var_reset(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___ctor_var_reset\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
