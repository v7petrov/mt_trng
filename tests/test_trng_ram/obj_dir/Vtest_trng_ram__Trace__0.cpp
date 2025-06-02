// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_trng_ram__Syms.h"


void Vtest_trng_ram___024root__trace_chg_0_sub_0(Vtest_trng_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtest_trng_ram___024root__trace_chg_0_sub_1(Vtest_trng_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_trng_ram___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root__trace_chg_0\n"); );
    // Init
    Vtest_trng_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_trng_ram___024root*>(voidSelf);
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_trng_ram___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vtest_trng_ram___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
}

void Vtest_trng_ram___024root__trace_chg_0_sub_0(Vtest_trng_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root__trace_chg_0_sub_0\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test_rng_ram__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.test_rng_ram__DOT__pA_wb_cyc_i));
        bufp->chgBit(oldp+2,(vlSelfRef.test_rng_ram__DOT__pA_wb_stb_i));
        bufp->chgCData(oldp+3,(vlSelfRef.test_rng_ram__DOT__pA_wb_we_i),4);
        bufp->chgSData(oldp+4,(vlSelfRef.test_rng_ram__DOT__pA_wb_addr_i),9);
        bufp->chgIData(oldp+5,(vlSelfRef.test_rng_ram__DOT__pA_wb_data_i),32);
        bufp->chgBit(oldp+6,(vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i));
        bufp->chgBit(oldp+7,(vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i));
        bufp->chgCData(oldp+8,(vlSelfRef.test_rng_ram__DOT__pB_wb_we_i),4);
        bufp->chgSData(oldp+9,(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i),9);
        bufp->chgIData(oldp+10,(vlSelfRef.test_rng_ram__DOT__pB_wb_data_i),32);
        bufp->chgBit(oldp+11,(vlSelfRef.test_rng_ram__DOT__we_rng));
        bufp->chgSData(oldp+12,(vlSelfRef.test_rng_ram__DOT__addr_rng),9);
        bufp->chgIData(oldp+13,(vlSelfRef.test_rng_ram__DOT__golden_data[0]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.test_rng_ram__DOT__golden_data[1]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.test_rng_ram__DOT__golden_data[2]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.test_rng_ram__DOT__golden_data[3]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.test_rng_ram__DOT__golden_data[4]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.test_rng_ram__DOT__golden_data[5]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.test_rng_ram__DOT__golden_data[6]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.test_rng_ram__DOT__golden_data[7]),32);
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i) 
                                     >> 8U))));
        bufp->chgCData(oldp+22,((0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i))),8);
        bufp->chgIData(oldp+23,(vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+24,(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel));
        bufp->chgCData(oldp+25,(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final),4);
        bufp->chgSData(oldp+26,(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final),9);
        bufp->chgIData(oldp+27,(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final),32);
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
                                     >> 8U))));
        bufp->chgBit(oldp+29,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same));
        bufp->chgCData(oldp+30,((0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final))),8);
        bufp->chgBit(oldp+31,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1));
        bufp->chgBit(oldp+32,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2));
        bufp->chgBit(oldp+33,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1));
        bufp->chgBit(oldp+34,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2));
        bufp->chgCData(oldp+35,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we),4);
        bufp->chgCData(oldp+36,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy),8);
        bufp->chgIData(oldp+37,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din),32);
        bufp->chgCData(oldp+38,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we),4);
        bufp->chgCData(oldp+39,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy),8);
        bufp->chgIData(oldp+40,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+41,(vlSelfRef.test_rng_ram__DOT__pA_wb_data_o),32);
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                               | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))));
        bufp->chgIData(oldp+43,(vlSelfRef.test_rng_ram__DOT__pB_wb_data_o),32);
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg) 
                               | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg))));
        bufp->chgBit(oldp+45,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice));
        bufp->chgIData(oldp+46,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_dout),32);
        bufp->chgIData(oldp+47,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_dout),32);
        bufp->chgBit(oldp+48,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg));
        bufp->chgBit(oldp+49,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg));
        bufp->chgBit(oldp+50,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg));
        bufp->chgBit(oldp+51,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+52,(vlSelfRef.test_rng_ram__DOT__ack_rng));
        bufp->chgBit(oldp+53,((0xffffffffU == vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_gen__DOT__o_valid_bus)));
        bufp->chgIData(oldp+54,((((((((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x1fU) | (0x40000000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x1eU))) 
                                    | ((0x20000000U 
                                        & ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0x1dU)) 
                                       | (0x10000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x1cU)))) 
                                   | (((0x8000000U 
                                        & ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0x1bU)) 
                                       | (0x4000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x1aU))) 
                                      | ((0x2000000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x19U)) 
                                         | (0x1000000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x18U))))) 
                                  | ((((0x800000U & 
                                        ((0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                         << 0x17U)) 
                                       | (0x400000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x16U))) 
                                      | ((0x200000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x15U)) 
                                         | (0x100000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x14U)))) 
                                     | (((0x80000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x13U)) 
                                         | (0x40000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x12U))) 
                                        | ((0x20000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0x11U)) 
                                           | (0x10000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0x10U)))))) 
                                 | (((((0x8000U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0xfU)) 
                                       | (0x4000U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xdU)) 
                                         | (0x1000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xcU)))) 
                                     | (((0x800U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 0xbU)) 
                                         | (0x400U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xaU))) 
                                        | ((0x200U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 9U)) 
                                           | (0x100U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 8U))))) 
                                    | ((((0x80U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 4U)))) 
                                       | (((8U & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 1U)) 
                                             | (1U 
                                                & (0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))))),32);
        bufp->chgBit(oldp+55,(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_active));
        bufp->chgBit(oldp+56,(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe));
        bufp->chgIData(oldp+57,(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_gen__DOT__o_valid_bus),32);
        bufp->chgBit(oldp+58,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+59,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+60,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+61,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+62,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+64,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+65,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+68,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+73,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+74,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+75,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+76,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+77,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+78,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+82,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+83,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+84,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+85,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+86,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? 0x15U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                               ^ ((
                                                   (0x10U 
                                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((0x41fdc9dU 
                                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                          << 3U)) 
                                                      | (4U 
                                                         & (((0x41fdc9dU 
                                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                             ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                            << 2U)))) 
                                                  | (2U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 1U)))) 
                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                             ^ (1U 
                                                & (0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+88,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+92,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+93,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U))))),5);
        bufp->chgCData(oldp+94,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U)))) 
                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+95,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__s)) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+96,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 4U)) 
                                  | ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & (((0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                              << 2U)))) 
                                 | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 1U)))),5);
        bufp->chgBit(oldp+97,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+98,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                     ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+100,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+101,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+102,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+103,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+104,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+106,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+107,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+108,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+110,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+115,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+116,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+117,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+118,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+119,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+120,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+123,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+124,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+125,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+126,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+127,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+128,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x14U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+133,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+135,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+136,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+137,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+138,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+139,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+140,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+142,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+143,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+144,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+145,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+146,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+148,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+149,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+151,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+152,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+153,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+157,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+158,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+159,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+160,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+161,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+162,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+163,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+165,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+166,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+167,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+168,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+169,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+170,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x17U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+171,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+172,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+173,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+174,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+175,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+176,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+177,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+178,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+179,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+180,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+181,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+182,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+183,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+184,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+185,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+186,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+187,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+188,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+190,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+191,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+192,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+193,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+194,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+195,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+197,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+199,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+200,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+201,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+202,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+203,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+204,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+207,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+208,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+209,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+210,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+211,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+212,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x16U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+213,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+214,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+215,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+216,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+217,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+219,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+220,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+221,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+222,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+223,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+224,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+225,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+226,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+227,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+228,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+229,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+230,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+232,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+233,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+234,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+235,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+236,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+237,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+241,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+242,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+243,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+244,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+245,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+246,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+247,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+249,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+250,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+251,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+252,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+253,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+254,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x11U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+255,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+256,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+257,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+258,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+259,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+260,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+261,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+262,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+263,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+264,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+265,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+266,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+267,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+268,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+269,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+270,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+271,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+272,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+274,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+275,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+276,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+277,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+278,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+279,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+283,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+284,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+285,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+286,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+287,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+288,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+289,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+291,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+292,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+293,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+294,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+295,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+296,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x10U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+298,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+300,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+301,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+302,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+303,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+304,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+305,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+306,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+307,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+308,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+309,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+310,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+311,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+312,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+313,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+314,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+316,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+317,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+318,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+320,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+321,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+323,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+325,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+326,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+327,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+328,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+329,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+330,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+331,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+333,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+334,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+335,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+336,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+337,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+338,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x13U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+339,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+344,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+345,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+346,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+347,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+348,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+349,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+350,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+351,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+352,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+353,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+354,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+355,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+356,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+358,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+359,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+360,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+361,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+362,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+363,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+364,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+367,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+368,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+369,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+370,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+371,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+372,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+373,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+375,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+376,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+377,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+378,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+379,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+380,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x12U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+381,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+382,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+383,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+384,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+385,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+386,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+387,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+388,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+389,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+390,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+391,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+392,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+393,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+394,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+395,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+396,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+397,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+398,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+400,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+401,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+402,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+403,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+404,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+406,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+407,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+409,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+410,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+411,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+412,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+413,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+414,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+415,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+417,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+418,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+419,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+420,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+421,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+422,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1dU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+423,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+424,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+425,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+426,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+427,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+428,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+429,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+430,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+431,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+432,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+433,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+434,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+435,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+436,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+437,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+438,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+439,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+440,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+441,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+442,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+443,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+444,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+445,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+446,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+448,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+451,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+452,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+453,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+454,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+455,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+456,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+457,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+459,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+460,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+461,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+462,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+463,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+464,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1cU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+465,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+466,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+467,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+468,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+469,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+470,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+471,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+472,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+473,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+474,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+475,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+476,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+477,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+478,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+479,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+480,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+481,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+482,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+484,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+485,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+486,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+487,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+488,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+489,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+490,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+491,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+493,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+494,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+495,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+496,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+497,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+498,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+499,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+500,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+501,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+502,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+503,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+504,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+505,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+506,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1fU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+511,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+512,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+513,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+514,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+515,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+516,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+517,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+518,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+519,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+520,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+521,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+522,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+523,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+524,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+526,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+527,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+528,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+529,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+530,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+532,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+533,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+535,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+536,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+537,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+538,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+539,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+540,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+541,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+543,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+544,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+545,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+546,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+547,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+548,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1eU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+549,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+552,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+555,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+556,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+557,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+558,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+559,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+560,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+561,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+562,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+563,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+564,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+565,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+566,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+568,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+569,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+570,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+571,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+572,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+573,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+574,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+575,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+576,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+577,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+578,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+579,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+580,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+581,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+582,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+583,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+585,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+586,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+587,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+588,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+589,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+590,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x19U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+591,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+592,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+596,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+597,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+598,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+599,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+600,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+601,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+602,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+603,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+604,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+605,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+606,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+607,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+608,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+610,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+611,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+612,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+613,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+614,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+615,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+616,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+617,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+619,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+620,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+621,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+622,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+623,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+624,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+625,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+627,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+628,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+629,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+630,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+631,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+632,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x18U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+633,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+634,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+638,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+639,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+640,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+641,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+642,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+643,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+644,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+645,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+646,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+647,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+648,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+649,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+650,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+652,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+653,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+654,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+655,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+656,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+657,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+658,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+659,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+661,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+662,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+663,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+664,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+665,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+666,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+667,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+669,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+670,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+671,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+672,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+673,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+674,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1bU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+676,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+677,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+680,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+681,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+682,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+683,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+684,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+685,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+686,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+687,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+688,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+689,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+690,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+691,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+692,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+694,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+695,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+696,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+697,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+698,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+699,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+700,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+701,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+702,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+703,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+704,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+705,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+706,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+707,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+708,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+709,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+710,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+711,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+712,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+713,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+714,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+715,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+716,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0x1aU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+720,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+721,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+723,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+724,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+725,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+726,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+727,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+728,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+729,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+730,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+731,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+732,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+733,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+734,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+736,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+737,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+738,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+739,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+740,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+741,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+742,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+743,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+745,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+746,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+747,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+748,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+749,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+750,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+751,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+753,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+754,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+755,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+756,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+757,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+758,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 5U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+760,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+761,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+762,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+763,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+764,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+765,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+766,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+767,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+768,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+769,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+770,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+771,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+772,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+773,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+774,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+775,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+776,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+778,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+779,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+780,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+781,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+782,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+783,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+784,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+785,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+786,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+787,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+788,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+789,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+790,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+791,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+792,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+793,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+795,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+796,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+797,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+798,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+799,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+800,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 4U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+801,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+804,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+805,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+806,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+807,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+808,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+809,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+810,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+811,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+812,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+813,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+814,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+815,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+816,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+817,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+818,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+819,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+820,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+821,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+822,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+823,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+824,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+825,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+826,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+827,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+828,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+829,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+830,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+831,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+832,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+833,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+834,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+835,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+837,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+838,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+839,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+840,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+841,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+842,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 7U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+843,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+849,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+850,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+851,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+852,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+853,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+854,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+855,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+856,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+857,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+858,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+859,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+860,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+862,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+863,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+864,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+865,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+866,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+868,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+869,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+871,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+872,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+873,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+874,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+875,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+876,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+877,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+879,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+880,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+881,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+882,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+883,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+884,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 6U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+885,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+886,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+891,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+892,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+893,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+894,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+895,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+896,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+897,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+898,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+899,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+900,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+901,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+902,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+903,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+904,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+905,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+906,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+907,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+908,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+910,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+911,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+912,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+913,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+914,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+915,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+916,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+917,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+918,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+919,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+920,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+921,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+922,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+923,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+924,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+925,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+926,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 1U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+927,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+928,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+929,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+930,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+931,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+932,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+933,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+934,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+935,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+936,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+937,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+938,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+939,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+940,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+941,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+942,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+943,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+944,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+945,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+946,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+947,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+948,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+949,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+950,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+951,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+952,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+953,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+955,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+956,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+957,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+958,((1U & (0x2778a365U >> 
                                      (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 0xbU)) 
                                        | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 7U))) 
                                       | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+959,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 0xbU)) 
                                   | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 7U))) 
                                  | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 6U)) 
                                     | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 4U))))),5);
        bufp->chgSData(oldp+960,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+961,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+963,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+964,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+965,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+966,((1U & (0x2778a365U >> 
                                      ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                 >> 8U)) 
                                       | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 6U)) 
                                          | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                   >> 4U))))))));
        bufp->chgCData(oldp+967,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                            >> 8U)) 
                                  | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 6U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                              >> 4U))))),5);
        bufp->chgCData(oldp+968,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                   ? 0U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                             ^ (((0x10U 
                                                  & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((0x41fdc9dU 
                                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                        << 3U)) 
                                                    | (4U 
                                                       & (((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                          << 2U)))) 
                                                | (2U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 1U)))) 
                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                           ^ (1U & 
                                              (0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+969,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+970,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+972,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+973,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+975,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                  ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U)) 
                                      | ((8U & ((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                  << 2U)))) 
                                     | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 1U))))),5);
        bufp->chgCData(oldp+976,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+977,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+978,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))),5);
        bufp->chgBit(oldp+979,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+980,((1U & (0x41fdc9dU 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+981,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                      ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+982,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+983,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+984,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+985,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+986,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+988,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+989,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+990,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+991,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+992,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+993,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+994,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+995,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+997,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+998,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                 ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+999,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                        & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                           ^ (0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                     : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1000,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1001,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1002,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1003,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1004,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1005,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1006,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1007,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1008,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1009,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1010,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 3U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1013,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1014,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1015,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1017,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1018,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1019,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1020,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1021,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1022,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1023,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1024,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1025,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1026,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1027,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1028,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1030,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1031,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1033,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1036,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1037,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1039,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1040,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1041,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1042,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1043,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1044,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1045,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1047,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1048,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1049,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1050,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1051,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1052,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 2U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1053,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1054,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1055,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1059,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1060,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1061,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1062,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1063,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1064,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1065,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1066,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1067,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1068,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1069,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1070,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1072,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1073,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1078,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1079,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1081,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1082,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1083,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1084,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1085,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1086,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1087,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1089,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1090,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1091,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1092,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1093,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1094,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xdU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1096,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1101,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1102,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1103,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1104,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1105,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1106,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1107,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1108,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1109,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1110,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1111,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1112,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1114,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1115,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1118,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1119,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1121,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1123,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1124,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1125,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1126,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1127,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1128,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1131,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1132,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1133,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1134,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1135,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1136,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xcU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1137,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1139,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1143,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1144,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1145,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1146,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1147,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1148,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1149,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1150,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1151,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1152,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1153,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1154,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1156,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1157,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1162,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1163,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1165,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1166,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1167,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1168,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1169,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1170,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1171,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1172,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1173,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1174,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1175,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1176,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1177,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1178,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xfU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1179,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1185,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1186,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1187,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1188,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1189,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1190,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1191,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1192,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1193,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1194,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1195,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1196,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1197,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1198,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1199,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1200,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1202,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1203,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1204,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1205,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1206,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1207,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1208,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1209,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1210,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1211,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1212,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1214,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1215,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1216,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1217,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1218,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1219,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1220,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xeU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1224,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1227,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1228,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1229,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1230,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1231,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1232,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1233,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1234,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1235,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1236,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1237,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1238,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1239,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1240,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1241,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1243,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1246,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1247,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1248,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1249,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1250,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1251,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1252,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1253,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1254,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1255,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1257,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1258,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1259,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1260,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1261,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1262,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 9U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1264,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1269,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1270,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1271,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1272,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1273,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1274,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1275,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1276,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1277,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1278,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1279,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1280,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1282,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1283,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1287,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1288,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1291,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1292,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1293,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1294,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1295,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1296,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1297,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1299,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1300,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1301,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1302,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1303,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1304,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 8U : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                              ^ (((0x10U 
                                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((0x41fdc9dU 
                                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & (((0x41fdc9dU 
                                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                            ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                           << 2U)))) 
                                                 | (2U 
                                                    & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                       << 1U)))) 
                                             ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                            ^ (1U & 
                                               (0x41fdc9dU 
                                                >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1311,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1312,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1313,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1314,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1315,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1316,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1317,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1318,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en))));
        bufp->chgBit(oldp+1319,((1U & (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1320,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1321,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1322,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+1324,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+1325,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+1330,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+1331,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+1333,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1334,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+1335,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+1336,((1U & (0x2778a365U 
                                       >> (((0x10U 
                                             & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 0xbU)) 
                                            | (8U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                           | ((6U & 
                                               (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                              | (1U 
                                                 & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1337,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                              >> 0xbU)) 
                                    | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 7U))) 
                                   | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 6U)) 
                                      | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                               >> 4U))))),5);
        bufp->chgSData(oldp+1338,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+1339,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+1341,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                    ^ (0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+1342,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                  ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                        ^ (0x2778a365U 
                                           >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                  : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+1343,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                                 || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                      ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                            ^ (0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                      : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+1344,((1U & (0x2778a365U 
                                       >> ((0x10U & 
                                            ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                    >> 4U))))))));
        bufp->chgCData(oldp+1345,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 8U)) 
                                   | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 6U)) 
                                      | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                               >> 4U))))),5);
        bufp->chgCData(oldp+1346,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? 0xbU : ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                                ^ (
                                                   ((0x10U 
                                                     & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((0x41fdc9dU 
                                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                           << 3U)) 
                                                       | (4U 
                                                          & (((0x41fdc9dU 
                                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                              ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                         << 1U)))) 
                                               ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                              ^ (1U 
                                                 & (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))))),5);
        bufp->chgCData(oldp+1347,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+1348,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+1349,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+1350,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+1351,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+1352,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+1353,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U))))),5);
        bufp->chgCData(oldp+1354,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+1355,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U)))) 
                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__s)) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+1356,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))),5);
        bufp->chgBit(oldp+1357,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+1358,((1U & (0x41fdc9dU 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+1359,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                       ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
        bufp->chgBit(oldp+1360,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en))));
    }
}

void Vtest_trng_ram___024root__trace_chg_0_sub_1(Vtest_trng_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root__trace_chg_0_sub_1\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1362);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+0,((1U & (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))));
        bufp->chgBit(oldp+1,((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+2,((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+3,((1U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce));
        bufp->chgBit(oldp+5,((1U & vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a)));
        bufp->chgBit(oldp+6,((1U & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b))));
        bufp->chgCData(oldp+7,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s),5);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en));
        bufp->chgCData(oldp+9,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state),3);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__cnt),6);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a),17);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in));
        bufp->chgBit(oldp+14,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+15,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in))));
        bufp->chgBit(oldp+16,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               || ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__mux1_in)))));
        bufp->chgBit(oldp+17,((1U & (0x2778a365U >> 
                                     (((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                 >> 0xbU)) 
                                       | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 7U))) 
                                      | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                >> 6U)) 
                                         | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+18,((((0x10U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                            >> 0xbU)) 
                                  | (8U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 7U))) 
                                 | ((6U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                           >> 6U)) 
                                    | (1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                             >> 4U))))),5);
        bufp->chgSData(oldp+19,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b),16);
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                     ^ (0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in));
        bufp->chgBit(oldp+22,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))));
        bufp->chgBit(oldp+23,(((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                      ^ (0x2778a365U 
                                         >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in))));
        bufp->chgBit(oldp+24,(((4U != (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state)) 
                               && ((2U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                       & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in) 
                                          ^ (0x2778a365U 
                                             >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))
                                    : (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__mux1_in)))));
        bufp->chgBit(oldp+25,((1U & (0x2778a365U >> 
                                     ((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                >> 8U)) 
                                      | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 6U)) 
                                         | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                                  >> 4U))))))));
        bufp->chgCData(oldp+26,(((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                           >> 8U)) 
                                 | ((0xeU & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 6U)) 
                                    | (1U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b) 
                                             >> 4U))))),5);
        bufp->chgCData(oldp+27,(((4U == (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__fsm__DOT__state))
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
        bufp->chgCData(oldp+28,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5),5);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C4),5);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C3),5);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C2),5);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1),5);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C0),5);
        bufp->chgCData(oldp+34,(((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
        bufp->chgCData(oldp+35,((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
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
                                 ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s))),5);
        bufp->chgCData(oldp+36,(((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1) 
                                   ^ (((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 4U)) 
                                       | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                                      | (2U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 1U)))) 
                                  ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__s)) 
                                 ^ (1U & (0x41fdc9dU 
                                          >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5))))),5);
        bufp->chgCData(oldp+37,((((0x10U & ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
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
        bufp->chgBit(oldp+38,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))));
        bufp->chgCData(oldp+39,((1U & (0x41fdc9dU >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C5)))),5);
        bufp->chgBit(oldp+40,((1U & (vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr1__DOT__a 
                                     ^ (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr2__DOT__b)))));
    }
    bufp->chgBit(oldp+41,(vlSelfRef.test_rng_ram__DOT__clk));
    bufp->chgBit(oldp+42,(((~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe)) 
                           & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg) 
                              | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg)))));
    bufp->chgBit(oldp+43,(((~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice)) 
                           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2))));
    bufp->chgBit(oldp+44,(((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2) 
                           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice))));
    bufp->chgBit(oldp+45,(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req));
}

void Vtest_trng_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root__trace_cleanup\n"); );
    // Init
    Vtest_trng_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_trng_ram___024root*>(voidSelf);
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
