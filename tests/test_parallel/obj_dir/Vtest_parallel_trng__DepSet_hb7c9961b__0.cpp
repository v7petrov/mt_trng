// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel__Syms.h"
#include "Vtest_parallel_trng.h"

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3)
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (1U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 2U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 2U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (2U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 3U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 3U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (3U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 4U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 4U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (4U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 5U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 5U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (5U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 6U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 6U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (6U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 7U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 7U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (7U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 8U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 8U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (8U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 9U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 9U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (9U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0xaU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0xaU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0xaU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0xbU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0xbU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0xbU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0xcU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0xcU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0xcU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0xdU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0xdU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0xdU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0xeU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0xeU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0xeU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0xfU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0xfU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0xfU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x10U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x10U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x10U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x11U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x11U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x11U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x12U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x12U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x12U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x13U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x13U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x13U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x14U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x14U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x14U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x15U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x15U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x15U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x16U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x16U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x16U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x17U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x17U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x17U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x18U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x18U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x18U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x19U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x19U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x19U ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x1aU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x1aU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x1aU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x1bU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x1bU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x1bU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x1cU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x1cU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x1cU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x1dU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x1dU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x1dU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x1eU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x1eU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? (0x1eU ^ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                        : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                        ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                       << 2U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 2U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                          >> 4U)))))) 
                                            ^ (IData)(vlSelfRef.__PVT__s)) 
                                           ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o)));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fsm__DOT__state;
    __Vdly__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__fsm__DOT__cnt;
    __Vdly__fsm__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__s;
    __Vdly__s = 0;
    CData/*4:0*/ __Vdly__nlfsr3__DOT__C5;
    __Vdly__nlfsr3__DOT__C5 = 0;
    // Body
    __Vdly__s = vlSelfRef.__PVT__s;
    __Vdly__fsm__DOT__state = vlSelfRef.__PVT__fsm__DOT__state;
    __Vdly__fsm__DOT__cnt = vlSelfRef.__PVT__fsm__DOT__cnt;
    __Vdly__nlfsr3__DOT__C5 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
    if (vlSymsp->TOP.test_trng_parallel32__DOT__rst) {
        __Vdly__s = 0U;
        __Vdly__fsm__DOT__state = 4U;
        __Vdly__fsm__DOT__cnt = 0U;
        vlSelfRef.__PVT__nlfsr1__DOT__a = 0U;
        vlSelfRef.__PVT__nlfsr2__DOT__b = 0U;
        __Vdly__nlfsr3__DOT__C5 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C0 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.__PVT__nlfsr3__DOT__C4 = 0U;
    } else {
        __Vdly__s = ((0x1eU & ((IData)(vlSelfRef.__PVT__s) 
                               << 1U)) | (1U & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                ^ (IData)(vlSelfRef.__PVT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 2U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))) {
                __Vdly__fsm__DOT__state = 1U;
                __Vdly__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
                __Vdly__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))) {
            __Vdly__fsm__DOT__cnt = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__fsm__DOT__cnt)));
            __Vdly__fsm__DOT__state = 1U;
        } else {
            __Vdly__fsm__DOT__state = 4U;
            __Vdly__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((0x10000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d1 
                                                 >> 0x1fU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((0x8000U 
                                            & (((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (vlSymsp->TOP.test_trng_parallel32__DOT__trng_d2 
                                                 >> 0x1fU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                               << 0xfU)) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = (0x1fU & ((4U 
                                                 == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSymsp->TOP.test_trng_parallel32__DOT__trng_d3))
                                                 : 
                                                ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
                                                   ^ 
                                                   (((0x10U 
                                                      & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                            << 3U)) 
                                                        | (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                            ^ (IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U))) 
                                                    | ((2U 
                                                        & ((IData)(vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                              >> 2U) 
                                                             ^ 
                                                             ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o) 
                                                              >> 4U)))))) 
                                                  ^ (IData)(vlSelfRef.__PVT__s)) 
                                                 ^ (IData)(vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o))));
            vlSelfRef.__PVT__nlfsr3__DOT__C0 = vlSelfRef.__PVT__nlfsr3__DOT__C1;
            vlSelfRef.__PVT__nlfsr3__DOT__C1 = vlSelfRef.__PVT__nlfsr3__DOT__C2;
            vlSelfRef.__PVT__nlfsr3__DOT__C2 = vlSelfRef.__PVT__nlfsr3__DOT__C3;
            vlSelfRef.__PVT__nlfsr3__DOT__C3 = vlSelfRef.__PVT__nlfsr3__DOT__C4;
            vlSelfRef.__PVT__nlfsr3__DOT__C4 = vlSelfRef.__PVT__nlfsr3__DOT__C5;
        }
    }
    vlSelfRef.__PVT__fsm__DOT__cnt = __Vdly__fsm__DOT__cnt;
    vlSelfRef.__PVT__s = __Vdly__s;
    vlSelfRef.__PVT__fsm__DOT__state = __Vdly__fsm__DOT__state;
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
    vlSelfRef.__PVT__nlfsr3__DOT__C5 = __Vdly__nlfsr3__DOT__C5;
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}
