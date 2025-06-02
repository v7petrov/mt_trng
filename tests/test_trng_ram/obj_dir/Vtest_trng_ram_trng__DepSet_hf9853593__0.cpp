// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng_ram.h for the primary calling header

#include "Vtest_trng_ram__pch.h"
#include "Vtest_trng_ram_trng.h"

VL_INLINE_OPT void Vtest_trng_ram_trng___nba_sequent__TOP__test_trng_ram__DOT__trng_inst__DOT__trng_array__BRA__0__KET____DOT__trng_inst__1(Vtest_trng_ram_trng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_trng_ram_trng___nba_sequent__TOP__test_trng_ram__DOT__trng_inst__DOT__trng_array__BRA__0__KET____DOT__trng_inst__1\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nlfsr3_ce = ((4U == (IData)(vlSelfRef.__PVT__fsm__DOT__state)) 
                                  || ((2U == (IData)(vlSelfRef.__PVT__fsm__DOT__state))
                                       ? (0U != (IData)(vlSelfRef.__PVT__fsm__DOT__cnt))
                                       : (4U == (0x3fU 
                                                 & VL_MODDIV_III(6, (IData)(vlSelfRef.__PVT__fsm__DOT__cnt), (IData)(5U))))));
}
