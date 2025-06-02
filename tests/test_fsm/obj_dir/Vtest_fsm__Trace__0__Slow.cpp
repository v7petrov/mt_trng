// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_fsm__Syms.h"


VL_ATTR_COLD void Vtest_fsm___024root__trace_init_sub__TOP__0(Vtest_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_init_sub__TOP__0\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"fsm_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"fsm_init_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"fsm_run_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"fsm_nlfsr3_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fsm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"load_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"init_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"run_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_fsm___024root__trace_init_top(Vtest_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_init_top\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_fsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_fsm___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_fsm___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_fsm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_fsm___024root__trace_register(Vtest_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_register\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_fsm___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_fsm___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_fsm___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_fsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_fsm___024root__trace_const_0_sub_0(Vtest_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_fsm___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_const_0\n"); );
    // Init
    Vtest_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_fsm___024root*>(voidSelf);
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_fsm___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_fsm___024root__trace_const_0_sub_0(Vtest_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_const_0_sub_0\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+9,(0xaU),32);
    bufp->fullCData(oldp+10,(4U),3);
    bufp->fullCData(oldp+11,(2U),3);
    bufp->fullCData(oldp+12,(1U),3);
}

VL_ATTR_COLD void Vtest_fsm___024root__trace_full_0_sub_0(Vtest_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_fsm___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_full_0\n"); );
    // Init
    Vtest_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_fsm___024root*>(voidSelf);
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_fsm___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_fsm___024root__trace_full_0_sub_0(Vtest_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root__trace_full_0_sub_0\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))));
    bufp->fullBit(oldp+2,((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))));
    bufp->fullBit(oldp+3,((1U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))));
    bufp->fullBit(oldp+4,(((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                           || ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))
                                ? (0U != (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))
                                : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt), (IData)(5U))))))));
    bufp->fullCData(oldp+5,(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state),3);
    bufp->fullCData(oldp+6,(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt),6);
    bufp->fullBit(oldp+7,(vlSelfRef.test_fsm__DOT__clk));
    bufp->fullBit(oldp+8,(vlSelfRef.test_fsm__DOT__rst));
}
