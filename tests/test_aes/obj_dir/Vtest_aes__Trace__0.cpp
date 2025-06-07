// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_aes__Syms.h"


void Vtest_aes___024root__trace_chg_0_sub_0(Vtest_aes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_aes___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_chg_0\n"); );
    // Init
    Vtest_aes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_aes___024root*>(voidSelf);
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_aes___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_aes___024root__trace_chg_0_sub_0(Vtest_aes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_chg_0_sub_0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ramfsm_tb__DOT__done));
        bufp->chgBit(oldp+1,(vlSelfRef.ramfsm_tb__DOT__we_rng));
        bufp->chgBit(oldp+2,(vlSelfRef.ramfsm_tb__DOT__ram_cyc_b));
        bufp->chgBit(oldp+3,(vlSelfRef.ramfsm_tb__DOT__ram_stb_b));
        bufp->chgSData(oldp+4,(vlSelfRef.ramfsm_tb__DOT__ram_addr_b),9);
        bufp->chgIData(oldp+5,(vlSelfRef.ramfsm_tb__DOT__ram_data_out_b),32);
        bufp->chgBit(oldp+6,(vlSelfRef.ramfsm_tb__DOT__ram_ack_b));
        bufp->chgBit(oldp+7,(vlSelfRef.ramfsm_tb__DOT__aes_cs));
        bufp->chgBit(oldp+8,(vlSelfRef.ramfsm_tb__DOT__aes_we));
        bufp->chgCData(oldp+9,(vlSelfRef.ramfsm_tb__DOT__aes_address),8);
        bufp->chgIData(oldp+10,(vlSelfRef.ramfsm_tb__DOT__aes_write_data),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ramfsm_tb__DOT__aes_read_data),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ramfsm_tb__DOT__aes_status_counter),32);
        bufp->chgBit(oldp+13,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__vld_out));
        bufp->chgIData(oldp+14,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__data_out),32);
        bufp->chgCData(oldp+15,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state),4);
        bufp->chgCData(oldp+16,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index),3);
        bufp->chgCData(oldp+17,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index),2);
        bufp->chgCData(oldp+18,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index),2);
        bufp->chgIData(oldp+19,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[0]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[1]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[2]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[3]),32);
    }
    bufp->chgBit(oldp+23,(vlSelfRef.ramfsm_tb__DOT__clk));
    bufp->chgBit(oldp+24,(vlSelfRef.ramfsm_tb__DOT__rst));
    bufp->chgBit(oldp+25,(vlSelfRef.ramfsm_tb__DOT__start));
    bufp->chgBit(oldp+26,(vlSelfRef.ramfsm_tb__DOT__ack_rng));
    bufp->chgBit(oldp+27,(vlSelfRef.ramfsm_tb__DOT__ram_stall_b));
    bufp->chgCData(oldp+28,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state),4);
}

void Vtest_aes___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_cleanup\n"); );
    // Init
    Vtest_aes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_aes___024root*>(voidSelf);
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
