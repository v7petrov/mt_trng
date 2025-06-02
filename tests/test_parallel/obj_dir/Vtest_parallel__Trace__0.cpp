// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_parallel__Syms.h"


void Vtest_parallel___024root__trace_chg_0_sub_0(Vtest_parallel___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtest_parallel___024root__trace_chg_0_sub_1(Vtest_parallel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_parallel___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root__trace_chg_0\n"); );
    // Init
    Vtest_parallel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_parallel___024root*>(voidSelf);
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_parallel___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vtest_parallel___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
}

void Vtest_parallel___024root__trace_chg_0_sub_0(Vtest_parallel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root__trace_chg_0_sub_0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test_trng_parallel32__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelfRef.test_trng_parallel32__DOT__trng_d1),32);
        bufp->chgIData(oldp+2,(vlSelfRef.test_trng_parallel32__DOT__trng_d2),32);
        bufp->chgCData(oldp+3,(vlSelfRef.test_trng_parallel32__DOT__trng_d3),5);
        bufp->chgBit(oldp+4,((1U & vlSelfRef.test_trng_parallel32__DOT__trng_d1)));
        bufp->chgBit(oldp+5,((1U & vlSelfRef.test_trng_parallel32__DOT__trng_d2)));
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                    >> 1U))));
        bufp->chgBit(oldp+7,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                    >> 1U))));
        bufp->chgCData(oldp+8,((1U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+9,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                    >> 2U))));
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 2U))));
        bufp->chgCData(oldp+11,((2U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+12,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 3U))));
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 3U))));
        bufp->chgCData(oldp+14,((3U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+15,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 4U))));
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 4U))));
        bufp->chgCData(oldp+17,((4U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 5U))));
        bufp->chgBit(oldp+19,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 5U))));
        bufp->chgCData(oldp+20,((5U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 6U))));
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 6U))));
        bufp->chgCData(oldp+23,((6U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 7U))));
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 7U))));
        bufp->chgCData(oldp+26,((7U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 8U))));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 8U))));
        bufp->chgCData(oldp+29,((8U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 9U))));
        bufp->chgBit(oldp+31,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 9U))));
        bufp->chgCData(oldp+32,((9U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0xaU))));
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0xaU))));
        bufp->chgCData(oldp+35,((0xaU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0xbU))));
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0xbU))));
        bufp->chgCData(oldp+38,((0xbU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0xcU))));
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0xcU))));
        bufp->chgCData(oldp+41,((0xcU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0xdU))));
        bufp->chgBit(oldp+43,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0xdU))));
        bufp->chgCData(oldp+44,((0xdU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0xeU))));
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0xeU))));
        bufp->chgCData(oldp+47,((0xeU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0xfU))));
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0xfU))));
        bufp->chgCData(oldp+50,((0xfU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x10U))));
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x10U))));
        bufp->chgCData(oldp+53,((0x10U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x11U))));
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x11U))));
        bufp->chgCData(oldp+56,((0x11U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x12U))));
        bufp->chgBit(oldp+58,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x12U))));
        bufp->chgCData(oldp+59,((0x12U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x13U))));
        bufp->chgBit(oldp+61,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x13U))));
        bufp->chgCData(oldp+62,((0x13U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x14U))));
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x14U))));
        bufp->chgCData(oldp+65,((0x14U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x15U))));
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x15U))));
        bufp->chgCData(oldp+68,((0x15U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x16U))));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x16U))));
        bufp->chgCData(oldp+71,((0x16U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x17U))));
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x17U))));
        bufp->chgCData(oldp+74,((0x17U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x18U))));
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x18U))));
        bufp->chgCData(oldp+77,((0x18U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x19U))));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x19U))));
        bufp->chgCData(oldp+80,((0x19U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x1aU))));
        bufp->chgCData(oldp+83,((0x1aU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x1bU))));
        bufp->chgCData(oldp+86,((0x1bU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x1cU))));
        bufp->chgCData(oldp+89,((0x1cU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x1dU))));
        bufp->chgCData(oldp+92,((0x1dU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+94,((1U & (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+95,((0x1eU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))),5);
        bufp->chgBit(oldp+96,((vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                               >> 0x1fU)));
        bufp->chgBit(oldp+97,((vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                               >> 0x1fU)));
        bufp->chgCData(oldp+98,((0x1fU & (~ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3)))),5);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+99,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? vlSelfRef.test_trng_parallel32__DOT__trng_d1
                                      : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                          ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                ^ (0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                          : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+100,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? vlSelfRef.test_trng_parallel32__DOT__trng_d2
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+101,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3)
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+102,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 1U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+103,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 1U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+104,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (1U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+105,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 2U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+106,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 2U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+107,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (2U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+108,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 3U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+109,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 3U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+110,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (3U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+111,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 4U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+112,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 4U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+113,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (4U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+114,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 5U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+115,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 5U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+116,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (5U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+117,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 6U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+118,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 6U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+119,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (6U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+120,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 7U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+121,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 7U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+122,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (7U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+123,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 8U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+124,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 8U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+125,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (8U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+126,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 9U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+127,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 9U) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+128,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (9U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+129,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0xaU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+130,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0xaU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+131,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0xaU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+132,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0xbU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+133,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0xbU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+134,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0xbU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+135,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0xcU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+136,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0xcU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+137,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0xcU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+138,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0xdU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+139,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0xdU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+140,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0xdU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+141,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0xeU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+142,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0xeU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+143,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0xeU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+144,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0xfU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+145,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0xfU) : 
                                      ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                        ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                              ^ (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                        : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+146,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0xfU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+147,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x10U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+148,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x10U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+149,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x10U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+150,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x11U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+151,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x11U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+152,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x11U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+153,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x12U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+154,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x12U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+155,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x12U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+156,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x13U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+157,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x13U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+158,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x13U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+159,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x14U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+160,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x14U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+161,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x14U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+162,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x15U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+163,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x15U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+164,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x15U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+165,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x16U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+166,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x16U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+167,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x16U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+168,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x17U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+169,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x17U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+170,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x17U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+171,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x18U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+172,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x18U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+173,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x18U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+174,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x19U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+175,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x19U)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+176,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x19U ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+177,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x1aU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+178,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x1aU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+179,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x1aU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+180,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x1bU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+181,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x1bU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+182,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x1bU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+183,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x1cU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+184,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x1cU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+185,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x1cU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+186,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x1dU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+187,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x1dU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+188,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x1dU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+189,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x1eU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+190,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x1eU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+191,(((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? (0x1eU ^ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                   : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                        ^ (((0x10U 
                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                               | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                                           | (2U & 
                                              ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                      ^ (1U & (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgBit(oldp+192,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d1 
                                          >> 0x1fU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))))));
        bufp->chgBit(oldp+193,((1U & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                       ? (vlSelfRef.test_trng_parallel32__DOT__trng_d2 
                                          >> 0x1fU)
                                       : ((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                           ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                                 ^ 
                                                 (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                           : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))))));
        bufp->chgCData(oldp+194,((0x1fU & ((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                            ? (~ (IData)(vlSelfRef.test_trng_parallel32__DOT__trng_d3))
                                            : ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                 ^ 
                                                 (((0x10U 
                                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((0x41fdc9dU 
                                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                          << 3U)) 
                                                      | (4U 
                                                         & (((0x41fdc9dU 
                                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                             ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                            << 2U)))) 
                                                  | (2U 
                                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 1U)))) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                               ^ (1U 
                                                  & (0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))))),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+195,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                      & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                            & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                        & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                       & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                          & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce))))))))))))))))))))))))))))))))));
        bufp->chgIData(oldp+196,((((((((0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                       << 0x1fU) | 
                                      (0x40000000U 
                                       & ((0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                          << 0x1eU))) 
                                     | ((0x20000000U 
                                         & ((0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                            << 0x1dU)) 
                                        | (0x10000000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x1cU)))) 
                                    | (((0x8000000U 
                                         & ((0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                            << 0x1bU)) 
                                        | (0x4000000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x1aU))) 
                                       | ((0x2000000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x19U)) 
                                          | (0x1000000U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0x18U))))) 
                                   | ((((0x800000U 
                                         & ((0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                            << 0x17U)) 
                                        | (0x400000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x16U))) 
                                       | ((0x200000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x15U)) 
                                          | (0x100000U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0x14U)))) 
                                      | (((0x80000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x13U)) 
                                          | (0x40000U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0x12U))) 
                                         | ((0x20000U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0x11U)) 
                                            | (0x10000U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0x10U)))))) 
                                  | (((((0x8000U & 
                                         ((0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                          << 0xfU)) 
                                        | (0x4000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0xeU))) 
                                       | ((0x2000U 
                                           & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0xdU)) 
                                          | (0x1000U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0xcU)))) 
                                      | (((0x800U & 
                                           ((0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                            << 0xbU)) 
                                          | (0x400U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0xaU))) 
                                         | ((0x200U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 9U)) 
                                            | (0x100U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 8U))))) 
                                     | ((((0x80U & 
                                           ((0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                            << 7U)) 
                                          | (0x40U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 6U))) 
                                         | ((0x20U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 5U)) 
                                            | (0x10U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 4U)))) 
                                        | (((8U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 3U)) 
                                            | (4U & 
                                               ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 2U))) 
                                           | ((2U & 
                                               ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))))),32);
        bufp->chgIData(oldp+197,((((((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       << 0x1fU) | 
                                      ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       << 0x1eU)) | 
                                     (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       << 0x1dU) | 
                                      ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       << 0x1cU))) 
                                    | ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         << 0x1bU) 
                                        | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 0x19U) 
                                          | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         << 0x17U) 
                                        | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 0x16U)) 
                                       | (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 0x15U) 
                                          | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 0x13U) 
                                          | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 0x12U)) 
                                         | (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 0x11U) 
                                            | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         << 0xfU) | 
                                        ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         << 0xeU)) 
                                       | (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 0xdU) 
                                          | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 0xbU) 
                                          | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 0xaU)) 
                                         | (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 9U) 
                                            | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               << 8U)))) 
                                     | (((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 7U) | 
                                          ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           << 6U)) 
                                         | (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 5U) 
                                            | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               << 4U))) 
                                        | ((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             << 3U) 
                                            | ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               << 2U)) 
                                           | (((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce))))))),32);
        bufp->chgBit(oldp+198,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+199,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+200,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+201,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+202,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+203,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+204,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+205,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+206,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+207,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+211,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+212,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+213,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+214,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+215,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+218,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+219,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+220,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+221,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+222,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+223,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+224,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+225,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+226,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+227,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+228,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+229,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+230,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+231,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+232,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+233,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+234,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+236,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+237,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+238,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+239,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+240,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+241,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+242,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+244,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+246,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+248,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+249,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+250,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+251,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+252,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+253,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+255,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+256,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+257,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+258,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+259,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+260,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+261,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+262,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+263,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+264,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+265,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+266,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+267,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+268,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+269,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+270,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+271,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+273,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+274,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+275,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+276,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+277,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+278,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+279,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+280,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+283,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+285,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+286,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+287,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+288,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+289,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+290,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+291,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+292,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+293,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+294,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+295,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+296,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+298,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+300,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+301,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+302,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+303,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+304,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+305,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+306,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+307,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+308,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+310,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+311,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+312,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+313,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+314,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+315,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+316,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+318,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+320,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+322,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+323,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+324,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+325,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+326,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+328,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+329,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+330,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+331,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+332,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+335,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+338,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+339,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+340,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+341,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+342,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+343,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+344,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+345,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+347,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+348,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+349,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+350,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+351,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+352,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+353,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+355,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+356,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+357,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+359,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+360,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+361,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+362,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+363,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+364,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+366,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+367,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+368,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+369,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+371,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+372,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+375,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+376,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+377,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+378,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+379,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+380,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+381,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+382,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+384,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+385,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+386,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+387,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+388,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+389,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+390,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+391,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+392,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+393,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+394,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+396,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+397,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+398,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+399,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+400,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+401,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+402,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+403,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+404,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+405,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+406,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+407,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+409,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+410,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+411,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+412,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+413,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+414,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+415,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+416,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+417,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+418,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+419,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+420,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+421,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+422,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+423,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+424,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+425,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+426,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+427,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+428,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+429,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+430,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+431,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+433,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+434,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+435,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+436,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+437,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+438,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+440,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+441,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+442,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+443,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+444,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+446,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+449,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+450,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+451,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+452,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+453,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+454,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+455,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+456,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+458,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+459,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+460,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+461,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+462,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+463,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+464,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+465,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+466,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+467,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+468,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+469,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+470,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+471,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+472,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+473,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+474,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+475,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+477,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+478,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+479,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+480,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+485,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+486,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+487,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+488,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+489,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+490,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+491,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+492,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+493,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+494,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+495,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+496,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+497,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+498,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+499,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+500,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+501,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+502,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+503,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+504,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+505,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+506,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+507,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+508,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+509,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+510,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+511,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+512,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+514,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+515,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+516,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+517,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+518,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+523,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+524,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+525,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+526,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+527,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+528,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+529,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+530,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+531,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+532,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+533,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+534,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+535,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+536,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+537,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+538,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+539,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+540,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+541,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+542,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+544,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+545,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+546,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+547,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+548,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+549,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+551,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+552,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+553,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+554,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+557,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+558,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+559,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+560,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+561,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+562,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+563,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+564,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+565,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+566,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+567,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+569,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+570,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+571,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+572,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+573,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+574,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+575,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+576,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+577,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+578,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+579,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+581,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+582,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+583,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+584,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+585,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+586,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+588,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+589,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+590,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+591,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+592,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+596,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+597,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+598,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+599,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+600,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+601,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+602,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+603,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+604,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+606,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+607,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+608,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+609,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+610,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+611,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+612,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+613,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+614,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+615,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+616,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+618,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+619,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+620,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+621,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+622,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+623,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+625,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+626,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+627,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+628,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+629,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+630,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+631,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+632,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+633,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+634,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+635,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+636,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+637,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+638,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+639,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+640,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+641,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+643,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+644,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+645,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+646,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+647,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+648,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+649,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+650,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+651,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+652,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+653,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+655,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+656,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+657,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+658,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+659,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+660,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+662,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+663,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+664,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+665,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+666,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+667,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+670,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+671,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+672,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+673,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+674,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+675,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+676,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+677,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+678,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+679,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+680,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+681,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+682,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+683,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+684,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+685,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+686,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+687,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+689,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+690,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+692,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+693,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+694,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+695,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+696,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+697,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+699,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+700,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+701,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+702,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+703,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+704,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+705,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+706,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+709,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+710,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+711,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+712,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+713,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+714,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+715,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+717,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+718,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+719,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+720,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+721,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+722,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+723,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+726,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+727,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+729,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+730,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+731,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+732,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+733,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+734,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+736,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+737,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+738,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+739,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+740,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+741,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+742,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+743,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+744,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+745,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+746,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+747,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+748,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+749,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+750,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+751,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+752,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+754,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+755,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+756,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+757,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+758,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+759,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+760,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+761,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+762,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+764,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+765,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+766,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+767,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+768,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+769,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+770,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+771,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+773,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+774,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+775,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+776,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+777,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+778,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+783,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+784,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+785,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+786,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+787,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+788,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+789,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+791,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+792,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+793,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+794,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+795,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+796,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+797,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+798,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+799,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+800,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+801,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+803,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+804,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+805,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+806,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+807,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+808,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+810,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+811,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+812,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+813,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+819,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+820,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+821,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+822,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+823,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+824,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+825,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+826,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+828,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+829,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+830,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+831,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+832,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+833,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+834,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+837,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+838,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+840,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+841,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+842,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+843,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+844,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+845,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+847,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+848,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+849,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+850,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+852,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+853,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+857,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+858,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+859,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+860,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+861,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+862,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+863,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+864,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+865,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+866,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+867,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+868,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+869,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+870,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+871,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+875,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+877,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+878,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+879,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+880,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+881,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+882,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+884,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+885,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+886,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+887,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+891,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+892,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+894,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+895,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+896,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+897,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+898,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+899,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+900,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+901,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+902,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+903,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+904,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+905,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+906,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+907,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+908,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+910,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+911,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+912,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+914,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+915,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+916,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+917,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+918,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+919,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+920,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+921,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+922,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+923,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+924,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+926,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+927,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+928,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+929,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+930,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+931,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+932,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+933,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+934,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+935,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+936,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+937,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+939,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+940,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+941,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+942,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+943,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+944,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+945,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+946,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+948,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+949,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+951,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+952,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+953,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+954,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+955,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+956,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+958,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+959,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+960,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+961,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+964,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+966,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+967,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+968,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+969,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+970,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+971,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+972,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+973,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+974,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+975,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+976,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+977,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+978,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+979,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+980,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+981,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+982,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+983,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+984,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+985,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+986,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+988,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+989,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+990,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+991,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+992,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+993,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+994,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+995,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+996,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+997,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+998,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+999,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1005,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1006,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1007,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1008,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1009,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1010,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1011,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1013,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1014,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1015,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1016,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1017,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1018,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1019,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1020,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1021,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1022,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1023,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1024,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1025,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1026,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1027,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1028,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1029,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1030,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1032,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1033,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1034,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1035,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1036,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1037,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1038,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1039,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1040,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1041,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1042,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1043,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1044,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1045,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1046,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1047,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1048,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1049,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1050,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1051,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1052,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1053,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1054,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1055,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1059,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1060,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1062,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1063,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1064,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1065,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1066,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1067,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1069,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1070,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1071,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1072,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1079,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1080,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1081,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1082,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1083,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1084,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1085,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1087,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1088,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1089,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1090,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1091,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1092,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1096,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1097,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1099,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1100,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1101,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1102,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1103,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1104,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1106,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1107,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1108,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1109,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1113,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1114,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1116,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1117,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1118,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1119,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1120,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1121,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1122,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1124,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1125,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1126,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1127,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1128,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1129,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1133,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1134,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1136,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1137,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1138,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1139,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1140,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1141,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1143,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1144,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1145,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1146,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1147,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1148,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1149,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1151,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1153,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1154,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1155,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1156,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1157,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1158,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1159,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1160,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1161,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1162,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1163,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1164,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1165,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1166,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1170,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1171,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1172,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1173,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1174,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1175,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1176,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1177,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1178,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1180,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1181,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1182,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1183,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1185,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1186,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1188,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1190,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1191,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1192,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1193,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1194,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1195,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1196,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1197,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1198,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1199,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1200,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1201,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1202,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1203,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1205,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1207,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1208,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1210,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1211,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1212,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1213,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1214,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1215,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1216,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1217,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1218,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1219,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1220,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1224,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1227,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1228,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1229,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1230,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1231,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1232,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1233,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1234,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1235,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1236,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1237,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1238,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1239,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1240,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1241,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1243,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1244,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1245,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1247,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1248,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1249,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1250,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1251,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1252,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1253,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1254,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1255,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1256,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1257,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1264,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1265,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1266,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1267,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1268,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1269,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1270,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1271,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1272,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1273,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1274,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1275,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1276,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1277,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+1279,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1281,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1282,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1283,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1284,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1285,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1286,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1287,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1288,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1291,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1292,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1293,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1294,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1301,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1302,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s))),5);
    }
}

void Vtest_parallel___024root__trace_chg_0_sub_1(Vtest_parallel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root__trace_chg_0_sub_1\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1304);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+0,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
        bufp->chgCData(oldp+1,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
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
        bufp->chgBit(oldp+2,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+3,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+4,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+6,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+7,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+8,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+9,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+10,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+11,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+12,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+18,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+19,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+20,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+21,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+22,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+25,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+26,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+27,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+28,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+35,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
        bufp->chgCData(oldp+36,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+37,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+38,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
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
        bufp->chgBit(oldp+39,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+40,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+41,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                     ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+43,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+44,((4U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+45,((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+46,((1U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+47,((1U & vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+48,((1U & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+49,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+55,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+56,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+57,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+58,((((0x10U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+59,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+62,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+63,(((2U == (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+64,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+65,(((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+72,(((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
        bufp->chgCData(oldp+73,((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
                                 ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+74,(((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+75,((((0x10U & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
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
        bufp->chgBit(oldp+76,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+77,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+78,((1U & (vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                     ^ (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    }
    bufp->chgBit(oldp+79,(vlSelfRef.test_trng_parallel32__DOT__clk));
}

void Vtest_parallel___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root__trace_cleanup\n"); );
    // Init
    Vtest_parallel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_parallel___024root*>(voidSelf);
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
