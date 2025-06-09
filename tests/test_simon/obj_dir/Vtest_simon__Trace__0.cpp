// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_simon__Syms.h"


void Vtest_simon___024root__trace_chg_0_sub_0(Vtest_simon___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_simon___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root__trace_chg_0\n"); );
    // Init
    Vtest_simon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_simon___024root*>(voidSelf);
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_simon___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_simon___024root__trace_chg_0_sub_0(Vtest_simon___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root__trace_chg_0_sub_0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test_simon__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.test_simon__DOT__key_we));
        bufp->chgSData(oldp+2,(vlSelfRef.test_simon__DOT__key_addr),9);
        bufp->chgBit(oldp+3,(vlSelfRef.test_simon__DOT__cipher_en));
        bufp->chgIData(oldp+4,(vlSelfRef.test_simon__DOT__plaintext),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgCData(oldp+5,(vlSelfRef.test_simon__DOT__dut__DOT__next_state),2);
        bufp->chgSData(oldp+6,(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr),9);
        bufp->chgSData(oldp+7,(vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr),9);
        bufp->chgSData(oldp+8,(vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr),9);
        bufp->chgIData(oldp+9,(vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out),32);
        bufp->chgBit(oldp+10,(vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en));
        bufp->chgCData(oldp+11,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state),2);
        bufp->chgCData(oldp+12,((0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr))),8);
        bufp->chgCData(oldp+13,((0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr))),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+14,(vlSelfRef.test_simon__DOT__dut__DOT__ram1_dout),32);
        bufp->chgIData(oldp+15,(vlSelfRef.test_simon__DOT__dut__DOT__ram2_dout),32);
        bufp->chgCData(oldp+16,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter),8);
        bufp->chgIData(oldp+17,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x),32);
        bufp->chgSData(oldp+18,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[0]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[1]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[2]),16);
        bufp->chgSData(oldp+21,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[3]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[4]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[5]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[6]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[7]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[8]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[9]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[10]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[11]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[12]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[13]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[14]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[15]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[16]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[17]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[18]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[19]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[20]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[21]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[22]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[23]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[24]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[25]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[26]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[27]),16);
        bufp->chgSData(oldp+46,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[28]),16);
        bufp->chgSData(oldp+47,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[29]),16);
        bufp->chgSData(oldp+48,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[30]),16);
        bufp->chgSData(oldp+49,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[31]),16);
        bufp->chgSData(oldp+50,((0xffffU & vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x)),16);
        bufp->chgSData(oldp+51,((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+52,(((0xfffeU & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             >> 0xfU)) 
                                 | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                    >> 0x1fU))),16);
        bufp->chgSData(oldp+53,(((0xff00U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             >> 8U)) 
                                 | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                    >> 0x18U))),16);
        bufp->chgSData(oldp+54,(((0xfffcU & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             >> 0xeU)) 
                                 | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                    >> 0x1eU))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+55,(vlSelfRef.test_simon__DOT__key_ack));
        bufp->chgCData(oldp+56,(vlSelfRef.test_simon__DOT__dut__DOT__state),2);
        bufp->chgBit(oldp+57,((0xffffffffU == vlSelfRef.test_simon__DOT__dut__DOT__rng_gen__DOT__o_valid_bus)));
        bufp->chgIData(oldp+58,((((((((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x1fU) | (0x40000000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x1eU))) 
                                    | ((0x20000000U 
                                        & ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0x1dU)) 
                                       | (0x10000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x1cU)))) 
                                   | (((0x8000000U 
                                        & ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0x1bU)) 
                                       | (0x4000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x1aU))) 
                                      | ((0x2000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x19U)) 
                                         | (0x1000000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x18U))))) 
                                  | ((((0x800000U & 
                                        ((0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                         << 0x17U)) 
                                       | (0x400000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x16U))) 
                                      | ((0x200000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x15U)) 
                                         | (0x100000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x14U)))) 
                                     | (((0x80000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x13U)) 
                                         | (0x40000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x12U))) 
                                        | ((0x20000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x11U)) 
                                           | (0x10000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0x10U)))))) 
                                 | (((((0x8000U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0xfU)) 
                                       | (0x4000U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xdU)) 
                                         | (0x1000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xcU)))) 
                                     | (((0x800U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xbU)) 
                                         | (0x400U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xaU))) 
                                        | ((0x200U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 9U)) 
                                           | (0x100U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 8U))))) 
                                    | ((((0x80U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 4U)))) 
                                       | (((8U & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 1U)) 
                                             | (1U 
                                                & (0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))))),32);
        bufp->chgBit(oldp+59,(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_active));
        bufp->chgBit(oldp+60,(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe));
        bufp->chgBit(oldp+61,(((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state)) 
                               | (2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state)))));
        bufp->chgIData(oldp+62,(vlSelfRef.test_simon__DOT__dut__DOT__ram1_din),32);
        bufp->chgIData(oldp+63,(vlSelfRef.test_simon__DOT__dut__DOT__key_part1),32);
        bufp->chgIData(oldp+64,(vlSelfRef.test_simon__DOT__dut__DOT__key_part2),32);
        bufp->chgIData(oldp+65,(vlSelfRef.test_simon__DOT__dut__DOT__ciphertext_reg),32);
        bufp->chgBit(oldp+66,(vlSelfRef.test_simon__DOT__dut__DOT__simon_en_reg));
        bufp->chgQData(oldp+67,(vlSelfRef.test_simon__DOT__dut__DOT__simon_key),64);
        bufp->chgIData(oldp+69,(vlSelfRef.test_simon__DOT__dut__DOT__rng_gen__DOT__o_valid_bus),32);
        bufp->chgBit(oldp+70,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+71,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+72,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+73,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+74,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+76,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+77,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+78,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+80,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+83,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+85,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+86,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+87,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+88,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+89,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+91,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+93,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+94,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+95,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+96,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+97,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+98,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? 0x15U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                               ^ ((8U 
                                                   & ((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      << 3U)) 
                                                  | (4U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 2U)))) 
                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                             ^ (1U 
                                                & (0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+105,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+106,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+107,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+108,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+109,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+110,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+111,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+112,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+113,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+114,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+115,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+116,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+118,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+119,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+120,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+122,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+127,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+128,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+129,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+130,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+131,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+132,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+135,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+136,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+137,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+138,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+139,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+140,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x14U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+142,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+147,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+148,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+149,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+150,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+151,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+152,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+153,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+154,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+155,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+156,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+157,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+158,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+160,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+161,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+162,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+164,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+165,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+167,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+169,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+170,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+171,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+172,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+173,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+174,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+175,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+177,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+178,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+179,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+180,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+181,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+182,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x17U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+183,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+184,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+189,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+190,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+191,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+192,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+193,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+194,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+195,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+196,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+197,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+198,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+199,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+200,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+202,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+203,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+204,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+206,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+207,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+211,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+212,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+213,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+214,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+215,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+216,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+219,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+220,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+221,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+222,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+223,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+224,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x16U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+225,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+226,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+227,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+228,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+229,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+230,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+231,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+232,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+233,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+234,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+235,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+236,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+237,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+238,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+239,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+240,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+241,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+242,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+244,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+245,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+246,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+247,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+248,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+249,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+251,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+253,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+254,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+255,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+256,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+257,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+258,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+259,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+261,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+262,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+263,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+264,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+265,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+266,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x11U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+267,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+270,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+271,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+272,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+273,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+274,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+275,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+276,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+277,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+278,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+279,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+280,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+281,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+282,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+283,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+284,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+286,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+287,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+288,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+289,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+290,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+291,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+293,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+294,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+295,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+296,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+297,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+298,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+299,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+300,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+301,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+302,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+303,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+304,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+305,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+306,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+307,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+308,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x10U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+309,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+310,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+311,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+312,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+313,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+315,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+316,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+317,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+318,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+319,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+320,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+321,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+322,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+323,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+324,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+325,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+326,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+328,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+329,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+330,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+331,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+332,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+334,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+335,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+337,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+338,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+339,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+340,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+341,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+342,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+345,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+346,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+347,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+348,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+349,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+350,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x13U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+351,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+352,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+353,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+355,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+356,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+357,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+358,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+359,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+360,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+361,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+362,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+363,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+364,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+365,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+366,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+367,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+368,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+370,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+371,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+372,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+373,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+374,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+375,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+376,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+377,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+379,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+380,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+381,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+382,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+383,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+384,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+385,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+387,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+388,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+389,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+390,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+391,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+392,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x12U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+393,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+394,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+399,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+400,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+401,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+402,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+403,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+404,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+405,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+406,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+407,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+408,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+409,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+410,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+412,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+413,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+414,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+415,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+416,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+417,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+418,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+419,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+420,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+421,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+422,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+423,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+424,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+425,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+426,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+427,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+429,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+430,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+431,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+432,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+433,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+434,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1dU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+435,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+437,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+438,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+439,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+440,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+441,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+442,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+443,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+444,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+445,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+446,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+447,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+448,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+449,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+450,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+451,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+452,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+454,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+455,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+456,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+457,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+458,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+459,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+460,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+461,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+463,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+464,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+465,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+466,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+467,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+468,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+469,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+471,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+472,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+473,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+474,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+475,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+476,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1cU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+477,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+483,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+484,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+485,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+486,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+487,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+488,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+489,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+490,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+491,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+492,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+493,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+494,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+495,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+496,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+497,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+498,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+499,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+500,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+501,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+502,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+505,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+506,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+507,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+508,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+509,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+510,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+511,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+513,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+514,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+515,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+516,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+517,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+518,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1fU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+523,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+525,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+526,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+527,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+528,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+529,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+530,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+531,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+532,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+533,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+534,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+535,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+536,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+538,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+539,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+540,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+541,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+542,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+543,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+544,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+545,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+547,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+548,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+549,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+550,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+551,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+552,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+553,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+555,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+556,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+557,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+558,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+559,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+560,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1eU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+564,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+566,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+567,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+568,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+569,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+570,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+571,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+572,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+573,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+574,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+575,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+576,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+577,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+578,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+579,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+580,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+581,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+582,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+583,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+584,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+586,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+587,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+589,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+590,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+591,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+592,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+593,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+594,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+595,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+597,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+598,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+599,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+600,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+601,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+602,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x19U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+603,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+604,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+606,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+607,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+608,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+609,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+610,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+611,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+612,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+613,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+614,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+615,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+616,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+617,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+618,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+619,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+620,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+622,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+623,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+624,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+625,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+626,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+627,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+628,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+629,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+630,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+631,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+632,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+633,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+634,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+635,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+636,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+637,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+638,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+639,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+640,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+641,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+642,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+643,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+644,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x18U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+645,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+646,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+647,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+648,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+649,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+650,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+651,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+652,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+653,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+654,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+655,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+656,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+657,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+658,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+659,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+660,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+661,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+662,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+664,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+665,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+666,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+667,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+668,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+671,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+673,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+674,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+675,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+676,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+677,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+678,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+679,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+681,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+682,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+683,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+684,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+685,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+686,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1bU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+687,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+689,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+690,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+691,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+692,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+693,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+694,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+695,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+696,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+697,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+698,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+699,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+700,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+701,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+702,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+703,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+704,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+705,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+706,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+707,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+708,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+709,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+710,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+712,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+713,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+714,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+715,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+716,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+717,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+718,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+719,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+720,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+721,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+723,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+724,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+725,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+726,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+727,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+728,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1aU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+729,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+730,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+734,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+735,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+736,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+737,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+738,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+739,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+740,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+741,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+742,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+743,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+744,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+745,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+746,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+747,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+748,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+749,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+750,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+751,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+752,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+753,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+754,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+755,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+756,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+757,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+758,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+759,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+760,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+761,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+762,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+763,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+764,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+765,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+766,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+767,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+768,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+769,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+770,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 5U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ ((8U 
                                                 & ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      << 2U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+771,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+772,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+773,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+777,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+778,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+779,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+780,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+781,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+782,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+783,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+784,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+785,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+786,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+787,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+788,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+790,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+791,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+792,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+793,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+794,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+796,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+797,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+799,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+800,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+801,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+802,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+803,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+804,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+805,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+807,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+808,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+809,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+810,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+811,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+812,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 4U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ ((8U 
                                                 & ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      << 2U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+819,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+820,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+821,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+822,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+823,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+824,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+825,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+826,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+827,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+828,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+829,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+830,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+831,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+832,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+833,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+834,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+835,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+836,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+838,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+839,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+840,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+841,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+842,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+843,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+844,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+845,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+846,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+847,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+849,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+850,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+851,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+852,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+853,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+854,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 7U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ ((8U 
                                                 & ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      << 2U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+861,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+862,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+863,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+864,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+865,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+866,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+867,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+868,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+869,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+870,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+871,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+872,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+873,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+874,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+875,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+876,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+877,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+878,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+881,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+883,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+884,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+885,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+886,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+887,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+888,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+889,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+890,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+891,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+892,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+893,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+894,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+895,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+896,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 6U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ ((8U 
                                                 & ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      << 2U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+903,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+904,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+905,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+906,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+907,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+908,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+909,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+910,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+911,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+912,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+913,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+914,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+915,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+916,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+917,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+918,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+919,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+920,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+921,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+922,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+923,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+925,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+926,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+927,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+928,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+929,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+930,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+931,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+933,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+934,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+935,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+936,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+937,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+938,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 1U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ ((8U 
                                                 & ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      << 2U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+941,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+942,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+945,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+946,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+947,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+948,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+949,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+950,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+951,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+952,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+953,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+954,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+955,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+956,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+958,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+959,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+960,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+961,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+962,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+964,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+965,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+966,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+967,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+968,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+969,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+970,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+971,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+972,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+975,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+976,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+977,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+978,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+979,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+980,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ ((8U 
                                                 & ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((0x41fdc9dU 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                      << 2U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+981,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+982,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+983,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+984,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+985,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+986,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+987,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 2U))))),5);
        bufp->chgCData(oldp+988,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+989,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+990,(((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & ((0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                         << 2U)))),5);
        bufp->chgBit(oldp+991,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+992,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+993,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+994,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+995,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+996,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+997,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+998,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+999,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1000,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1001,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1006,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1007,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1008,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1009,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1010,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1011,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1012,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1013,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1014,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1015,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1017,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1018,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1019,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1020,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1021,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1022,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 3U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ ((8U 
                                                  & ((0x41fdc9dU 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                     << 3U)) 
                                                 | (4U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 2U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1023,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1025,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1029,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1030,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1031,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1032,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1033,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1034,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1035,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1036,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1037,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1038,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1039,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1040,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1042,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1043,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1044,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1046,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1047,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1048,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1049,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1051,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1052,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1053,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1054,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1055,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1056,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1057,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1058,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1059,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1060,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1061,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1062,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1063,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1064,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 2U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ ((8U 
                                                  & ((0x41fdc9dU 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                     << 3U)) 
                                                 | (4U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 2U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1070,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1071,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1072,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1073,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1074,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1075,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1076,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1077,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1078,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1079,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1080,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1081,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1082,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1083,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1084,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1085,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1089,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1091,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1093,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1094,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1095,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1096,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1097,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1098,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1099,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1101,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1102,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1103,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1104,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1105,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1106,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xdU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1113,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1114,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1115,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1116,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1117,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1118,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1119,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1120,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1121,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1122,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1123,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1124,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1126,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1127,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1128,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1132,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1133,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1135,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1136,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1137,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1138,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1139,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1140,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1141,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1143,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1144,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1145,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1146,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1147,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1148,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xcU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1149,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1151,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1153,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1154,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1155,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1156,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1157,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1158,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1159,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1160,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1161,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1162,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1163,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1164,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1165,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1166,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1167,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1168,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1169,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1171,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1173,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1174,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1175,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1176,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1177,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1178,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1179,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1180,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1181,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1182,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1183,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1184,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1185,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1186,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1187,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1188,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1189,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1190,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xfU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1191,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1197,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1198,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1199,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1200,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1201,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1202,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1203,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1204,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1205,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1206,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1207,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1208,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1210,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1211,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1213,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1216,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1217,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1218,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1219,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1220,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1221,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1222,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1223,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1224,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1225,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1226,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1227,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1228,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1229,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1230,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1231,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1232,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xeU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1239,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1240,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1241,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1242,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1243,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1244,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1245,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1246,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1247,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1248,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1249,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1250,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1251,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1252,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1253,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1256,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1258,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1259,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1261,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1262,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1263,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1264,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1265,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1266,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1267,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1269,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1270,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1271,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1272,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1273,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1274,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 9U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ ((8U 
                                                  & ((0x41fdc9dU 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                     << 3U)) 
                                                 | (4U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 2U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1279,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1281,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1282,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1283,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1284,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1285,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1286,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1287,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1288,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1289,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1290,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1291,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1292,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1294,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1295,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1297,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1300,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1301,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1303,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1304,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1305,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1306,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1307,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1308,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1309,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1311,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1312,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1313,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1314,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1315,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1316,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 8U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ ((8U 
                                                  & ((0x41fdc9dU 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                     << 3U)) 
                                                 | (4U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 2U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1318,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1319,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1322,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1323,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1324,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1325,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1326,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1327,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1328,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1329,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1330,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1331,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1332,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1333,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1334,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1336,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1337,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1338,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1341,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1342,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1343,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1345,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1346,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1347,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1348,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1349,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1350,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1351,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1353,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1354,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1355,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1356,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1357,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1358,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xbU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1359,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1360,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1363,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1364,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1365,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1366,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1367,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1368,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1369,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1370,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1371,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1372,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1373,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1374,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1375,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1376,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1378,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1379,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1383,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1384,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1385,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1387,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1388,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1389,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1390,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1391,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1392,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1393,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1394,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1395,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1396,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1397,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1398,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1399,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1400,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xaU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   (8U 
                                                    & ((0x41fdc9dU 
                                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 2U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1402,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1403,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1407,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 2U))))),5);
        bufp->chgCData(oldp+1408,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 2U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1409,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 2U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1410,(((8U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 3U)) | 
                                   (4U & ((0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                          << 2U)))),5);
        bufp->chgBit(oldp+1411,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1412,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1413,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+1414,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_i),16);
        bufp->chgSData(oldp+1415,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp),16);
        bufp->chgSData(oldp+1416,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp2),16);
        bufp->chgSData(oldp+1417,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror3),16);
        bufp->chgSData(oldp+1418,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror1),16);
        bufp->chgCData(oldp+1419,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__index),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+1420,(vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire),32);
        bufp->chgBit(oldp+1421,((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))));
        bufp->chgCData(oldp+1422,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state),2);
        bufp->chgCData(oldp+1423,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter),8);
        bufp->chgCData(oldp+1424,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i),7);
    }
    bufp->chgBit(oldp+1425,(vlSelfRef.test_simon__DOT__clk));
    bufp->chgBit(oldp+1426,(((~ ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
                                 >> 8U)) & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe))));
    bufp->chgBit(oldp+1427,(((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe) 
                             & ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
                                >> 8U))));
    bufp->chgIData(oldp+1428,(((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                ? vlSelfRef.test_simon__DOT__plaintext
                                : vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y)),32);
    bufp->chgIData(oldp+1429,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y),32);
    bufp->chgSData(oldp+1430,((0xffffU & ((4U > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
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
                                          [(0x1fU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))]))),16);
    bufp->chgQData(oldp+1431,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in),64);
    bufp->chgIData(oldp+1433,((((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state)))
                                ? vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y
                                : ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                    ? vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire
                                    : 0U))),32);
    bufp->chgCData(oldp+1434,((((~ ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
                                    >> 8U)) & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe))
                                ? 0xfU : 0U)),4);
    bufp->chgCData(oldp+1435,((((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe) 
                                & ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
                                   >> 8U)) ? 0xfU : 0U)),4);
}

void Vtest_simon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root__trace_cleanup\n"); );
    // Init
    Vtest_simon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_simon___024root*>(voidSelf);
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
