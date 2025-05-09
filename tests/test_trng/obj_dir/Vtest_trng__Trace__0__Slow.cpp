// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_trng__Syms.h"


VL_ATTR_COLD void Vtest_trng___024root__trace_init_sub__TOP__0(Vtest_trng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_init_sub__TOP__0\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_trng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"trng_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"trng_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"trng_o_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"trng_o_warbler",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"trng_d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"prev_warbler",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"changed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("trng_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"o_warbler",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"init_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"run_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+8,0,"warbler_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("f0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"load_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"init_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"run_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("n1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"warbler_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+18,0,"mux0_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mux1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"mux0_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"mux1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"mux2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"wgt1_5o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wlut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+22,0,"wgt1_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("n2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"warbler_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"b0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+25,0,"mux0_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"mux1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"mux0_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"mux1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"mux2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"wgt1_5o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wlut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"wgt1_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("n3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"tk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+8,0,"o_warbler",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"C5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"C4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+33,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"wgt2_5o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"pad_wgt2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"gamma_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"sumL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"sumR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"next_C5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("WGT1_5_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+8,0,"wgt1_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WGT2_5_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"wgt2_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("bigmux2to1_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("gamma_mult_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sh", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_trng___024root__trace_init_top(Vtest_trng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_init_top\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_trng___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_trng___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_trng___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_trng___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_trng___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_trng___024root__trace_register(Vtest_trng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_register\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_trng___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_trng___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_trng___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_trng___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_trng___024root__trace_const_0_sub_0(Vtest_trng___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_trng___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_const_0\n"); );
    // Init
    Vtest_trng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_trng___024root*>(voidSelf);
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_trng___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_trng___024root__trace_const_0_sub_0(Vtest_trng___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_const_0_sub_0\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+48,(0xaU),32);
    bufp->fullCData(oldp+49,(4U),3);
    bufp->fullCData(oldp+50,(2U),3);
    bufp->fullCData(oldp+51,(1U),3);
    bufp->fullBit(oldp+52,(0U));
    bufp->fullIData(oldp+53,(0x2778a365U),32);
    bufp->fullIData(oldp+54,(0x41fdc9dU),32);
}

VL_ATTR_COLD void Vtest_trng___024root__trace_full_0_sub_0(Vtest_trng___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_trng___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_full_0\n"); );
    // Init
    Vtest_trng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_trng___024root*>(voidSelf);
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_trng___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_trng___024root__trace_full_0_sub_0(Vtest_trng___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root__trace_full_0_sub_0\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.test_trng__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.test_trng__DOT__trng_d1));
    bufp->fullBit(oldp+3,(vlSelfRef.test_trng__DOT__trng_d2));
    bufp->fullCData(oldp+4,(vlSelfRef.test_trng__DOT__trng_d3),5);
    bufp->fullBit(oldp+5,(vlSelfRef.test_trng__DOT__prev_warbler));
    bufp->fullBit(oldp+6,(vlSelfRef.test_trng__DOT__changed));
    bufp->fullBit(oldp+7,(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce));
    bufp->fullBit(oldp+8,((1U & (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1)))));
    bufp->fullBit(oldp+9,((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))));
    bufp->fullBit(oldp+10,((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))));
    bufp->fullBit(oldp+11,((1U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))));
    bufp->fullBit(oldp+12,((1U & vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a)));
    bufp->fullBit(oldp+13,((1U & (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b))));
    bufp->fullCData(oldp+14,(vlSelfRef.test_trng__DOT__trng_inst__DOT__s),5);
    bufp->fullCData(oldp+15,(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state),3);
    bufp->fullCData(oldp+16,(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt),6);
    bufp->fullIData(oldp+17,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a),17);
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
    bufp->fullBit(oldp+19,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in));
    bufp->fullBit(oldp+20,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                            & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                               ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
    bufp->fullBit(oldp+21,(((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                             ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                             : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in))));
    bufp->fullBit(oldp+22,((1U & (0x2778a365U >> ((
                                                   (0x10U 
                                                    & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                       >> 0xbU)) 
                                                   | (8U 
                                                      & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                         >> 7U))) 
                                                  | ((6U 
                                                      & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                           >> 4U))))))));
    bufp->fullCData(oldp+23,((((0x10U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                         >> 0xbU)) 
                               | (8U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                        >> 7U))) | 
                              ((6U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                      >> 6U)) | (1U 
                                                 & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                    >> 4U))))),5);
    bufp->fullSData(oldp+24,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b),16);
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
    bufp->fullBit(oldp+26,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in));
    bufp->fullBit(oldp+27,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                            & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                               ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))));
    bufp->fullBit(oldp+28,(((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                             ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                             : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in))));
    bufp->fullBit(oldp+29,((1U & (0x2778a365U >> ((0x10U 
                                                   & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                      >> 8U)) 
                                                  | ((0xeU 
                                                      & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                           >> 4U))))))));
    bufp->fullCData(oldp+30,(((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                        >> 8U)) | (
                                                   (0xeU 
                                                    & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                         >> 4U))))),5);
    bufp->fullCData(oldp+31,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5),5);
    bufp->fullCData(oldp+32,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C4),5);
    bufp->fullCData(oldp+33,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C3),5);
    bufp->fullCData(oldp+34,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C2),5);
    bufp->fullCData(oldp+35,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1),5);
    bufp->fullCData(oldp+36,(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C0),5);
    bufp->fullBit(oldp+37,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))));
    bufp->fullCData(oldp+38,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))),5);
    bufp->fullCData(oldp+39,((((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 4U)) | 
                               ((8U & ((0x41fdc9dU 
                                        >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                       << 3U)) | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                      ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                              | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                       << 1U)))),5);
    bufp->fullCData(oldp+40,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s) 
                              ^ (1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5))))),5);
    bufp->fullCData(oldp+41,(((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1) 
                              ^ (((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 4U)) 
                                  | ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & (((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                               ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                              << 2U)))) 
                                 | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 1U))))),5);
    bufp->fullCData(oldp+42,((((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s) 
                               ^ (1U & (0x41fdc9dU 
                                        >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))) 
                              ^ ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1) 
                                 ^ (((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                               << 4U)) 
                                     | ((8U & ((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                               << 3U)) 
                                        | (4U & (((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                  ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                 << 2U)))) 
                                    | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 1U)))))),5);
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                  ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b)))));
    bufp->fullBit(oldp+44,(vlSelfRef.test_trng__DOT__clk));
    bufp->fullBit(oldp+45,(((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                             ? (IData)(vlSelfRef.test_trng__DOT__trng_d1)
                             : ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                                 ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                    & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                                 : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in)))));
    bufp->fullBit(oldp+46,(((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                             ? (IData)(vlSelfRef.test_trng__DOT__trng_d2)
                             : ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                                 ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                                    & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                                 : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in)))));
    bufp->fullCData(oldp+47,(((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                               ? (IData)(vlSelfRef.test_trng__DOT__trng_d3)
                               : (((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s) 
                                   ^ (1U & (0x41fdc9dU 
                                            >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)))) 
                                  ^ ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1) 
                                     ^ (((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (0x41fdc9dU 
                                                    >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((0x41fdc9dU 
                                                  >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5)) 
                                                 ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                        | (2U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                 << 1U))))))),5);
}
