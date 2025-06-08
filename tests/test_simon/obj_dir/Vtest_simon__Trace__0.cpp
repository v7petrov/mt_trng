// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_simon__Syms.h"


void Vtest_simon___024root__trace_chg_0_sub_0(Vtest_simon___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtest_simon___024root__trace_chg_0_sub_1(Vtest_simon___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_simon___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root__trace_chg_0\n"); );
    // Init
    Vtest_simon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_simon___024root*>(voidSelf);
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_simon___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vtest_simon___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
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
        bufp->chgSData(oldp+5,(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr),9);
        bufp->chgCData(oldp+6,(vlSelfRef.test_simon__DOT__dut__DOT__next_state),2);
        bufp->chgCData(oldp+7,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state),2);
        bufp->chgSData(oldp+8,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__pA_addr_final),9);
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__pA_addr_final) 
                                    >> 8U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr) 
                                     >> 8U))));
        bufp->chgBit(oldp+11,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__req_same));
        bufp->chgCData(oldp+12,((0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__pA_addr_final))),8);
        bufp->chgCData(oldp+13,((0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr))),8);
        bufp->chgBit(oldp+14,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_access_ram1));
        bufp->chgBit(oldp+15,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_access_ram2));
        bufp->chgBit(oldp+16,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_access_ram1));
        bufp->chgBit(oldp+17,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_access_ram2));
        bufp->chgCData(oldp+18,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_we),4);
        bufp->chgCData(oldp+19,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_addy),8);
        bufp->chgIData(oldp+20,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_din),32);
        bufp->chgCData(oldp+21,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_we),4);
        bufp->chgCData(oldp+22,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_addy),8);
        bufp->chgIData(oldp+23,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_din),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+24,(vlSelfRef.test_simon__DOT__dut__DOT__pA_data_out),32);
        bufp->chgCData(oldp+25,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter),8);
        bufp->chgIData(oldp+26,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x),32);
        bufp->chgSData(oldp+27,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[0]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[1]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[2]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[3]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[4]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[5]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[6]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[7]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[8]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[9]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[10]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[11]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[12]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[13]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[14]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[15]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[16]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[17]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[18]),16);
        bufp->chgSData(oldp+46,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[19]),16);
        bufp->chgSData(oldp+47,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[20]),16);
        bufp->chgSData(oldp+48,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[21]),16);
        bufp->chgSData(oldp+49,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[22]),16);
        bufp->chgSData(oldp+50,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[23]),16);
        bufp->chgSData(oldp+51,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[24]),16);
        bufp->chgSData(oldp+52,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[25]),16);
        bufp->chgSData(oldp+53,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[26]),16);
        bufp->chgSData(oldp+54,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[27]),16);
        bufp->chgSData(oldp+55,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[28]),16);
        bufp->chgSData(oldp+56,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[29]),16);
        bufp->chgSData(oldp+57,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[30]),16);
        bufp->chgSData(oldp+58,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[31]),16);
        bufp->chgSData(oldp+59,((0xffffU & vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x)),16);
        bufp->chgSData(oldp+60,((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+61,(((0xfffeU & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             >> 0xfU)) 
                                 | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                    >> 0x1fU))),16);
        bufp->chgSData(oldp+62,(((0xff00U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             >> 8U)) 
                                 | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                    >> 0x18U))),16);
        bufp->chgSData(oldp+63,(((0xfffcU & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             >> 0xeU)) 
                                 | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                    >> 0x1eU))),16);
        bufp->chgBit(oldp+64,(((IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram1_reg) 
                               | (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram2_reg))));
        bufp->chgBit(oldp+65,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__port_choice));
        bufp->chgIData(oldp+66,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_dout),32);
        bufp->chgIData(oldp+67,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_dout),32);
        bufp->chgBit(oldp+68,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram1_reg));
        bufp->chgBit(oldp+69,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram2_reg));
        bufp->chgBit(oldp+70,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram1_reg));
        bufp->chgBit(oldp+71,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram2_reg));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+72,(vlSelfRef.test_simon__DOT__dut__DOT__ack_rng));
        bufp->chgBit(oldp+73,(vlSelfRef.test_simon__DOT__dut__DOT__pB_cyc));
        bufp->chgBit(oldp+74,(vlSelfRef.test_simon__DOT__dut__DOT__pB_stb));
        bufp->chgCData(oldp+75,(vlSelfRef.test_simon__DOT__dut__DOT__state),2);
        bufp->chgIData(oldp+76,(vlSelfRef.test_simon__DOT__dut__DOT__key_part1),32);
        bufp->chgIData(oldp+77,(vlSelfRef.test_simon__DOT__dut__DOT__key_part2),32);
        bufp->chgIData(oldp+78,(vlSelfRef.test_simon__DOT__dut__DOT__ciphertext_reg),32);
        bufp->chgBit(oldp+79,(vlSelfRef.test_simon__DOT__dut__DOT__simon_en_reg));
        bufp->chgBit(oldp+80,(vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en));
        bufp->chgQData(oldp+81,(vlSelfRef.test_simon__DOT__dut__DOT__simon_key),64);
        bufp->chgBit(oldp+83,((0xffffffffU == vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__o_valid_bus)));
        bufp->chgIData(oldp+84,((((((((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x1fU) | (0x40000000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x1eU))) 
                                    | ((0x20000000U 
                                        & ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0x1dU)) 
                                       | (0x10000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x1cU)))) 
                                   | (((0x8000000U 
                                        & ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0x1bU)) 
                                       | (0x4000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x1aU))) 
                                      | ((0x2000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x19U)) 
                                         | (0x1000000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x18U))))) 
                                  | ((((0x800000U & 
                                        ((0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                         << 0x17U)) 
                                       | (0x400000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x16U))) 
                                      | ((0x200000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x15U)) 
                                         | (0x100000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x14U)))) 
                                     | (((0x80000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x13U)) 
                                         | (0x40000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x12U))) 
                                        | ((0x20000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x11U)) 
                                           | (0x10000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0x10U)))))) 
                                 | (((((0x8000U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0xfU)) 
                                       | (0x4000U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xdU)) 
                                         | (0x1000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xcU)))) 
                                     | (((0x800U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xbU)) 
                                         | (0x400U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xaU))) 
                                        | ((0x200U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 9U)) 
                                           | (0x100U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 8U))))) 
                                    | ((((0x80U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 4U)))) 
                                       | (((8U & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 1U)) 
                                             | (1U 
                                                & (0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))))),32);
        bufp->chgBit(oldp+85,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__rng_write_active));
        bufp->chgBit(oldp+86,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__rng_write_strobe));
        bufp->chgBit(oldp+87,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__pA_we_sel));
        bufp->chgCData(oldp+88,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__pA_we_final),4);
        bufp->chgIData(oldp+89,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__pA_data_final),32);
        bufp->chgBit(oldp+90,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_valid_req));
        bufp->chgIData(oldp+91,(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__o_valid_bus),32);
        bufp->chgBit(oldp+92,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+93,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+94,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+95,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+96,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+98,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+99,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+100,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+102,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+105,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+107,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+108,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+109,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+110,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+111,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+112,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+115,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+116,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+117,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+118,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+119,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+120,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x15U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+126,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+127,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+128,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+129,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+130,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+131,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+132,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+133,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+134,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+135,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+136,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+137,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+138,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+140,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+141,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+142,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+143,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+144,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+147,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+149,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+150,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+151,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+152,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+153,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+154,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+157,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+158,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+159,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+160,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+161,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+162,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x14U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+163,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+164,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+165,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+166,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+167,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+168,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+169,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+170,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+171,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+172,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+173,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+174,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+175,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+176,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+177,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+178,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+179,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+180,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+182,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+183,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+184,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+185,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+186,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+189,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+191,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+192,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+193,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+194,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+195,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+196,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+197,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+199,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+200,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+201,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+202,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+203,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+204,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x17U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+205,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+206,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+207,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+208,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+209,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+210,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+211,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+212,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+213,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+214,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+215,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+216,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+217,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+218,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+219,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+220,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+221,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+222,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+224,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+225,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+226,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+227,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+228,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+229,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+231,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+233,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+234,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+235,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+236,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+237,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+238,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+241,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+242,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+243,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+244,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+245,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+246,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x16U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+247,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+248,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+249,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+250,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+251,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+252,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+253,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+254,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+255,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+256,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+257,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+258,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+259,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+260,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+261,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+262,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+263,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+264,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+266,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+267,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+268,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+269,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+270,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+271,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+273,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+275,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+276,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+277,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+278,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+279,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+280,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+283,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+284,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+285,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+286,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+287,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+288,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x11U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+289,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+290,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+291,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+294,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+295,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+296,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+297,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+298,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+299,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+300,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+301,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+302,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+303,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+304,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+305,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+306,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+308,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+309,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+310,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+312,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+313,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+315,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+317,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+318,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+319,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+320,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+321,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+322,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+323,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+325,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+326,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+327,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+328,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+329,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+330,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x10U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+331,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+332,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+335,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+337,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+338,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+339,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+340,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+341,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+342,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+343,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+344,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+345,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+346,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+347,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+348,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+350,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+351,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+352,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+353,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+354,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+355,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+356,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+357,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+359,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+360,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+361,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+362,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+363,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+364,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+367,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+368,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+369,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+370,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+371,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+372,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x13U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+375,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+376,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+377,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+378,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+379,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+380,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+381,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+382,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+383,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+384,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+385,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+386,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+387,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+388,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+389,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+390,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+392,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+393,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+394,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+395,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+396,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+399,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+401,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+402,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+403,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+404,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+405,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+406,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+407,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+409,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+410,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+411,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+412,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+413,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+414,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x12U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+415,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+416,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+417,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+418,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+419,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+421,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+422,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+423,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+424,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+425,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+426,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+427,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+428,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+429,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+430,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+431,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+432,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+434,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+435,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+436,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+438,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+439,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+440,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+441,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+443,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+444,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+445,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+446,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+447,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+448,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+451,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+452,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+453,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+454,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+455,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+456,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1dU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+457,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+458,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+459,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+460,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+461,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+462,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+463,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+464,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+465,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+466,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+467,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+468,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+469,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+470,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+471,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+472,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+473,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+474,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+475,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+476,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+477,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+478,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+479,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+480,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+482,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+483,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+484,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+485,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+486,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+487,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+488,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+489,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+490,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+491,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+493,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+494,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+495,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+496,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+497,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+498,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1cU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+499,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+500,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+501,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+502,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+503,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+504,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+505,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+506,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+507,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+508,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+509,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+510,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+511,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+512,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+513,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+514,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+515,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+516,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+518,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+519,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+520,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+521,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+522,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+523,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+524,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+525,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+527,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+528,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+529,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+530,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+531,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+532,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+533,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+535,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+536,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+537,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+538,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+539,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+540,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1fU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+541,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+542,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+543,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+544,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+545,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+546,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+547,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+548,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+549,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+550,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+551,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+552,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+553,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+554,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+555,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+556,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+557,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+558,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+560,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+561,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+562,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+563,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+564,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+565,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+566,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+567,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+569,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+570,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+571,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+572,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+573,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+574,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+575,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+576,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+577,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+578,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+579,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+580,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+581,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+582,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1eU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+583,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+584,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+588,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+589,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+590,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+591,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+592,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+593,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+594,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+595,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+596,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+597,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+598,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+599,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+600,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+602,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+603,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+604,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+605,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+606,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+607,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+608,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+609,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+611,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+612,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+613,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+614,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+615,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+616,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+617,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+619,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+620,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+621,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+622,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+623,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+624,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x19U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+625,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+626,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+627,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+629,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+630,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+631,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+632,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+633,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+634,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+635,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+636,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+637,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+638,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+639,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+640,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+641,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+642,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+644,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+645,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+646,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+647,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+648,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+649,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+650,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+651,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+653,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+654,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+655,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+656,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+657,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+658,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+659,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+661,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+662,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+663,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+664,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+665,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+666,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x18U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+667,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+670,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+671,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+672,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+673,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+674,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+675,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+676,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+677,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+678,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+679,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+680,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+681,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+682,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+683,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+684,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+685,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+686,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+687,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+688,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+689,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+690,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+691,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+692,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+693,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+695,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+696,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+697,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+698,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+699,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+700,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+701,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+702,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+703,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+704,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+705,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+706,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+707,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+708,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1bU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+715,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+716,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+717,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+718,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+719,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+720,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+721,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+722,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+723,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+724,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+725,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+726,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+728,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+729,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+730,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+731,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+732,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+734,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+735,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+737,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+738,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+739,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+740,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+741,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+742,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+743,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+745,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+746,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+747,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+748,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+749,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+750,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1aU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+751,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+752,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+753,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+754,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+755,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+756,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+757,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+758,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+759,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+760,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+761,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+762,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+763,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+764,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+765,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+766,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+767,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+768,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+769,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+770,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+771,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+772,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+773,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+774,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+776,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+777,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+778,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+779,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+780,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+781,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+782,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+783,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+784,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+785,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+786,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+787,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+788,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+789,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+790,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+791,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+792,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 5U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+796,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+797,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+798,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+799,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+800,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+801,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+802,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+803,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+804,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+805,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+806,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+807,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+808,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+809,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+810,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+812,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+813,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+814,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+815,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+816,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+818,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+819,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+820,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+821,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+822,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+823,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+824,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+825,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+826,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+827,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+828,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+829,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+830,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+831,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+832,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+833,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+834,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 4U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+838,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+839,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+840,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+841,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+842,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+843,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+844,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+845,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+846,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+847,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+848,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+849,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+850,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+851,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+852,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+854,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+855,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+856,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+857,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+858,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+860,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+861,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+862,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+863,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+864,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+865,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+866,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+867,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+868,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+869,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+871,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+872,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+873,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+874,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+875,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+876,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 7U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+881,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+882,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+883,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+884,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+885,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+886,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+887,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+888,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+889,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+890,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+891,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+892,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+893,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+894,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+895,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+896,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+897,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+898,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+899,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+900,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+903,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+905,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+906,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+907,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+908,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+909,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+910,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+911,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+912,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+913,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+914,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+915,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+916,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+917,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+918,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 6U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+919,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+920,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+921,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+922,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+924,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+925,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+926,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+927,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+928,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+929,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+930,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+931,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+932,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+933,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+934,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+935,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+936,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+937,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+938,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+939,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+940,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+941,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+942,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+944,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+945,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+946,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+947,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+948,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+949,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+950,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+951,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+952,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+953,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+955,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+956,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+957,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+958,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+959,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+960,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 1U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+961,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+964,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+966,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+967,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+968,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+969,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+970,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+971,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+972,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+973,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+974,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+975,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+976,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+977,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+978,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+979,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+980,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+981,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+982,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+983,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+984,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+985,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+986,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+987,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+989,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+990,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+991,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+992,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+993,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+994,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+995,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+997,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+998,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+999,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1000,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1001,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1002,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1009,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1010,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1011,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1012,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1013,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1014,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1015,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1016,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1017,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1018,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1019,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1020,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1022,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1023,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1028,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1029,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1031,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1032,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1033,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1034,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1035,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1036,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1037,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1039,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1040,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1041,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1042,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1043,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1044,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 3U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1045,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1046,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1047,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1048,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1051,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1052,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1053,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1054,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1055,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1056,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1057,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1058,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1059,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1060,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1061,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1062,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1064,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1065,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1070,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1071,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1073,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1074,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1075,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1076,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1077,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1078,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1079,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1081,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1082,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1083,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1084,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1085,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1086,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 2U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1087,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1089,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1090,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1091,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1093,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1094,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1095,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1096,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1097,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1098,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1099,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1100,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1101,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1102,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1103,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1104,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1106,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1107,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1112,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1113,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1115,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1116,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1117,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1118,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1119,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1120,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1121,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1123,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1124,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1125,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1126,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1127,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1128,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xdU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1129,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1134,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1135,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1136,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1137,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1138,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1139,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1140,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1141,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1142,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1143,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1144,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1145,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1146,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1148,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1149,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1153,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1154,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1155,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1157,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1158,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1159,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1160,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1161,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1162,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1163,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1165,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1166,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1167,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1168,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1169,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1170,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xcU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1171,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1173,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1175,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1177,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1178,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1179,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1180,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1181,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1182,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1183,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1184,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1185,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1186,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1187,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1188,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1190,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1191,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1193,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1196,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1197,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1199,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1200,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1201,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1202,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1203,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1204,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1205,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1206,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1207,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1208,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1209,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1210,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1211,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1212,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xfU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1219,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1220,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1221,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1222,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1223,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1224,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1225,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1226,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1227,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1228,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1229,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1230,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1232,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1233,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1235,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1238,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1239,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1240,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1241,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1242,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1243,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1244,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1245,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1246,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1247,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1248,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1249,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1250,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1251,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1252,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1253,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1254,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xeU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1255,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1256,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1261,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1262,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1263,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1264,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1265,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1266,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1267,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1268,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1269,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1270,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1271,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1272,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1274,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1275,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1279,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1280,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1281,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1283,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1284,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1285,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1286,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1287,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1288,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1291,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1292,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1293,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1294,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1295,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1296,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 9U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1301,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1303,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1304,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1305,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1306,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1307,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1308,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1309,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1310,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1311,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1312,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1313,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1314,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1316,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1317,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1318,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1319,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1322,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1323,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1325,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1326,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1327,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1328,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1329,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1330,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1331,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1333,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1334,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1335,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1336,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1337,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1338,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 8U : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1339,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1341,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1342,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1345,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1346,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1347,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1348,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1349,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1350,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1351,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1352,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1353,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1354,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1355,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1356,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1358,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1359,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1360,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1361,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1363,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1364,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1365,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1367,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1368,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1369,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1370,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1371,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1372,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1373,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1375,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1376,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1377,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1378,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1379,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1380,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xbU : ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1381,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1383,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1384,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1385,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1387,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1388,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1389,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
    }
}

void Vtest_simon___024root__trace_chg_0_sub_1(Vtest_simon___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root__trace_chg_0_sub_1\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1391);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+0,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
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
        bufp->chgBit(oldp+1,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+2,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+3,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+4,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+5,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+6,((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+7,((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+8,((1U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+10,((1U & vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+11,((1U & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+12,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+13,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+14,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+19,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+20,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+21,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               || ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+22,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+23,((((0x10U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+24,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+27,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+28,(((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+29,(((4U != (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               && ((2U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+30,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+31,(((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+32,(((4U == (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
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
        bufp->chgCData(oldp+33,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
        bufp->chgCData(oldp+40,((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
                                 ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+41,(((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+42,((((0x10U & ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
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
        bufp->chgBit(oldp+43,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+44,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+45,((1U & (vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                     ^ (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+46,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_i),16);
        bufp->chgSData(oldp+47,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp),16);
        bufp->chgSData(oldp+48,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp2),16);
        bufp->chgSData(oldp+49,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror3),16);
        bufp->chgSData(oldp+50,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror1),16);
        bufp->chgCData(oldp+51,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__index),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+52,(vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire),32);
        bufp->chgBit(oldp+53,((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))));
        bufp->chgBit(oldp+54,(vlSelfRef.test_simon__DOT__dut__DOT__pB_ack));
        bufp->chgIData(oldp+55,(vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out),32);
        bufp->chgCData(oldp+56,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state),2);
        bufp->chgCData(oldp+57,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter),8);
        bufp->chgCData(oldp+58,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i),7);
    }
    bufp->chgBit(oldp+59,(vlSelfRef.test_simon__DOT__clk));
    bufp->chgBit(oldp+60,(((~ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__rng_write_strobe)) 
                           & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram1_reg) 
                              | (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram2_reg)))));
    bufp->chgBit(oldp+61,(((~ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__port_choice)) 
                           & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2))));
    bufp->chgBit(oldp+62,(((IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2) 
                           & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__port_choice))));
    bufp->chgIData(oldp+63,(((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                              ? vlSelfRef.test_simon__DOT__plaintext
                              : vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y)),32);
    bufp->chgIData(oldp+64,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y),32);
    bufp->chgSData(oldp+65,((0xffffU & ((4U > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
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
    bufp->chgQData(oldp+66,(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in),64);
    bufp->chgIData(oldp+68,((((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                              & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state)))
                              ? vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y
                              : ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                  ? vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire
                                  : 0U))),32);
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
