// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_wgt__Syms.h"


VL_ATTR_COLD void Vtest_wgt___024root__trace_init_sub__TOP__0(Vtest_wgt___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_init_sub__TOP__0\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_wgt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"gamma_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"gamma_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"gamma_expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"wgt1_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"wgt1_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"wgt2_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"wgt2_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gamma_mult_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("wgt1_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"wgt1_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wgt2_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"wgt2_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_wgt___024root__trace_init_top(Vtest_wgt___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_init_top\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_wgt___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_wgt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_wgt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_wgt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_wgt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_wgt___024root__trace_register(Vtest_wgt___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_register\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_wgt___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_wgt___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_wgt___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_wgt___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_wgt___024root__trace_const_0_sub_0(Vtest_wgt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_wgt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_const_0\n"); );
    // Init
    Vtest_wgt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_wgt___024root*>(voidSelf);
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_wgt___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_wgt___024root__trace_const_0_sub_0(Vtest_wgt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_const_0_sub_0\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+10,(0xaU),32);
    bufp->fullIData(oldp+11,(0x2778a365U),32);
    bufp->fullIData(oldp+12,(0x41fdc9dU),32);
}

VL_ATTR_COLD void Vtest_wgt___024root__trace_full_0_sub_0(Vtest_wgt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_wgt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_full_0\n"); );
    // Init
    Vtest_wgt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_wgt___024root*>(voidSelf);
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_wgt___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_wgt___024root__trace_full_0_sub_0(Vtest_wgt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root__trace_full_0_sub_0\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.test_wgt__DOT__rst));
    bufp->fullCData(oldp+2,(vlSelfRef.test_wgt__DOT__gamma_in),5);
    bufp->fullCData(oldp+3,(vlSelfRef.test_wgt__DOT__gamma_expected),5);
    bufp->fullCData(oldp+4,(vlSelfRef.test_wgt__DOT__wgt1_address),5);
    bufp->fullBit(oldp+5,((1U & (0x2778a365U >> (IData)(vlSelfRef.test_wgt__DOT__wgt1_address)))));
    bufp->fullCData(oldp+6,(vlSelfRef.test_wgt__DOT__wgt2_address),5);
    bufp->fullBit(oldp+7,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_wgt__DOT__wgt2_address)))));
    bufp->fullBit(oldp+8,(vlSelfRef.test_wgt__DOT__clk));
    bufp->fullCData(oldp+9,((((0x10U & ((0xfffffff0U 
                                         & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                            << 3U)) 
                                        ^ ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 4U))) 
                              | ((8U & (VL_REDXOR_4(
                                                    (7U 
                                                     & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))) 
                                        << 3U)) | (4U 
                                                   & (((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                       ^ (IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                      << 2U)))) 
                             | ((2U & ((0x7ffffffeU 
                                        & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                           >> 1U)) 
                                       ^ ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 1U))) 
                                | (1U & VL_REDXOR_8(
                                                    (0x14U 
                                                     & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))))))),5);
}
