// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon__Syms.h"
#include "Vtest_simon_trng.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vtest_simon__ConstPool__TABLE_heab3c15f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtest_simon__ConstPool__TABLE_h586c1205_0;

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x15U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx1 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx1];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x14U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx2];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx2];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x17U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx3];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x16U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx4];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx4];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x11U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx5 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx5];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx5];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x10U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx6];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx6];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x13U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx7];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx7];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x12U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx8 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx8];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx8];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x1dU : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx9 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx9];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx9];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x1cU : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx10 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx10];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx10];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x1fU : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx11 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx11];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx11];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x1eU : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx12 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx12];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx12];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x19U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx13 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx13];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx13];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x18U : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx14 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx14];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx14];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x1bU : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx15 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx15];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx15];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0x1aU : (
                                                   (((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx16 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx16];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx16];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 5U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx17 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx17];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx17];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 4U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx18 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx18];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx18];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 7U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx19 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx19];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx19];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 6U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx20 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx20];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx20];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 1U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx21 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx21];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx21];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx22 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx22];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx22];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 3U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx23 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx23];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx23];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 2U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx24 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx24];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx24];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0xdU : ((
                                                   ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx25 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx25];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx25];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0xcU : ((
                                                   ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx26 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx26];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx26];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0xfU : ((
                                                   ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx27 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx27];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx27];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0xeU : ((
                                                   ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx28 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx28];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx28];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 9U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx29 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx29];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx29];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 8U : ((((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx30 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx30];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx30];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0xbU : ((
                                                   ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx31 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx31];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx31];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}

VL_INLINE_OPT void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
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
    if (vlSymsp->TOP.test_simon__DOT__rst) {
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
        vlSelfRef.__PVT__nlfsr1__DOT__a = ((((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             || ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr1__DOT__mux1_in))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (vlSelfRef.__PVT__nlfsr1__DOT__a 
                                                 >> 1U)));
        vlSelfRef.__PVT__nlfsr2__DOT__b = ((((4U != (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                             && ((2U 
                                                  == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in) 
                                                     ^ 
                                                     (0x2778a365U 
                                                      >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1))))
                                                  : (IData)(vlSelfRef.__PVT__nlfsr2__DOT__mux1_in))) 
                                            << 0xfU) 
                                           | (0x7fffU 
                                              & ((IData)(vlSelfRef.__PVT__nlfsr2__DOT__b) 
                                                 >> 1U)));
        if (vlSelfRef.__PVT__nlfsr3_ce) {
            __Vdly__nlfsr3__DOT__C5 = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                        ? 0xaU : ((
                                                   ((IData)(vlSelfRef.__PVT__nlfsr3__DOT__C1) 
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
    __Vtableidx32 = (((IData)(vlSelfRef.__PVT__fsm__DOT__cnt) 
                      << 2U) | (((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                 << 1U) | (4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))));
    vlSelfRef.__PVT__nlfsr3_ce = Vtest_simon__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx32];
    vlSelfRef.__PVT__output_en = Vtest_simon__ConstPool__TABLE_h586c1205_0
        [__Vtableidx32];
    vlSelfRef.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.__PVT__nlfsr3__DOT__wgt2_5o = (1U & (0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.__PVT__nlfsr3__DOT__C5)));
}
