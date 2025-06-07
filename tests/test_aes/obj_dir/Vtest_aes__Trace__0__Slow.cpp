// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_aes__Syms.h"


VL_ATTR_COLD void Vtest_aes___024root__trace_init_sub__TOP__0(Vtest_aes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_init_sub__TOP__0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ramfsm_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"we_rng",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"addr_rng",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+27,0,"ack_rng",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ram_cyc_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ram_stb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"ram_we_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"ram_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+6,0,"ram_data_out_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"ram_ack_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"ram_stall_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"aes_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"aes_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"aes_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"aes_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"aes_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"aes_status_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"we_rng",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"addr_rng",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+27,0,"ack_rng",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ram_cyc_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ram_stb_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"ram_we_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"ram_addr_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+6,0,"ram_data_out_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"ram_ack_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"ram_stall_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"aes_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"aes_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"aes_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"aes_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"aes_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"key_word_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"block_word_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"result_word_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("key_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("block_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("result_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+44,0,"KEY_BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+45,0,"BLOCK_BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+30,0,"RNG_TARGET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_aes___024root__trace_init_top(Vtest_aes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_init_top\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_aes___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_aes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_aes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_aes___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_aes___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_aes___024root__trace_register(Vtest_aes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_register\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_aes___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_aes___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_aes___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_aes___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_aes___024root__trace_const_0_sub_0(Vtest_aes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_aes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_const_0\n"); );
    // Init
    Vtest_aes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_aes___024root*>(voidSelf);
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_aes___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_aes___024root__trace_const_0_sub_0(Vtest_aes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_const_0_sub_0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+30,(0x1fU),9);
    bufp->fullCData(oldp+31,(0U),4);
    bufp->fullIData(oldp+32,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[0]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[1]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[2]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[3]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[4]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[5]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[6]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_buffer[7]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_buffer[0]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_buffer[1]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_buffer[2]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_buffer[3]),32);
    bufp->fullSData(oldp+44,(0U),9);
    bufp->fullSData(oldp+45,(0x10U),9);
}

VL_ATTR_COLD void Vtest_aes___024root__trace_full_0_sub_0(Vtest_aes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_aes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_full_0\n"); );
    // Init
    Vtest_aes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_aes___024root*>(voidSelf);
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_aes___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_aes___024root__trace_full_0_sub_0(Vtest_aes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root__trace_full_0_sub_0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.ramfsm_tb__DOT__done));
    bufp->fullBit(oldp+2,(vlSelfRef.ramfsm_tb__DOT__we_rng));
    bufp->fullBit(oldp+3,(vlSelfRef.ramfsm_tb__DOT__ram_cyc_b));
    bufp->fullBit(oldp+4,(vlSelfRef.ramfsm_tb__DOT__ram_stb_b));
    bufp->fullSData(oldp+5,(vlSelfRef.ramfsm_tb__DOT__ram_addr_b),9);
    bufp->fullIData(oldp+6,(vlSelfRef.ramfsm_tb__DOT__ram_data_out_b),32);
    bufp->fullBit(oldp+7,(vlSelfRef.ramfsm_tb__DOT__ram_ack_b));
    bufp->fullBit(oldp+8,(vlSelfRef.ramfsm_tb__DOT__aes_cs));
    bufp->fullBit(oldp+9,(vlSelfRef.ramfsm_tb__DOT__aes_we));
    bufp->fullCData(oldp+10,(vlSelfRef.ramfsm_tb__DOT__aes_address),8);
    bufp->fullIData(oldp+11,(vlSelfRef.ramfsm_tb__DOT__aes_write_data),32);
    bufp->fullIData(oldp+12,(vlSelfRef.ramfsm_tb__DOT__aes_read_data),32);
    bufp->fullIData(oldp+13,(vlSelfRef.ramfsm_tb__DOT__aes_status_counter),32);
    bufp->fullBit(oldp+14,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__vld_out));
    bufp->fullIData(oldp+15,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__data_out),32);
    bufp->fullCData(oldp+16,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state),4);
    bufp->fullCData(oldp+17,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index),3);
    bufp->fullCData(oldp+18,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index),2);
    bufp->fullCData(oldp+19,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index),2);
    bufp->fullIData(oldp+20,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[0]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[1]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[2]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[3]),32);
    bufp->fullBit(oldp+24,(vlSelfRef.ramfsm_tb__DOT__clk));
    bufp->fullBit(oldp+25,(vlSelfRef.ramfsm_tb__DOT__rst));
    bufp->fullBit(oldp+26,(vlSelfRef.ramfsm_tb__DOT__start));
    bufp->fullBit(oldp+27,(vlSelfRef.ramfsm_tb__DOT__ack_rng));
    bufp->fullBit(oldp+28,(vlSelfRef.ramfsm_tb__DOT__ram_stall_b));
    bufp->fullCData(oldp+29,(vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state),4);
}
