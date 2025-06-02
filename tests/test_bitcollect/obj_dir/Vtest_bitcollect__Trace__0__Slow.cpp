// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_bitcollect__Syms.h"


VL_ATTR_COLD void Vtest_bitcollect___024root__trace_init_sub__TOP__0(Vtest_bitcollect___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_init_sub__TOP__0\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_bitcollect", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"trng_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"trng_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"trng_o_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"trng_o_warbler",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"trng_d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"byte_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"rand_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("collector", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"o_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_warbler",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"byte_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"rand_byte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("trng_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_warbler",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"init_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"run_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"warbler_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"load_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"init_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"run_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+54,0,"RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("nlfsr1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"warbler_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+19,0,"mux0_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"mux1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"mux0_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"mux1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"mux2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"wgt1_5o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wlut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"wgt1_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nlfsr2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"warbler_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"b0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+22,0,"mux0_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"mux1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"mux0_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"mux1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"mux2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"wgt1_5o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wlut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+15,0,"wgt1_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nlfsr3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"nlfsr3_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"tk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"o_warbler",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"next_C5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+33,0,"C5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"C4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"node1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"node2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"node3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"gamma_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"wgt2_5o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"pad_wgt2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("WGT1_5_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"wgt1_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WGT2_5_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"wgt2_5o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"LUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("bigmux2to1_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("gamma_mult_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shift5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"in_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_init_top(Vtest_bitcollect___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_init_top\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_bitcollect___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_bitcollect___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_bitcollect___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_bitcollect___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_register(Vtest_bitcollect___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_register\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_bitcollect___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_bitcollect___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_bitcollect___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_bitcollect___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_const_0_sub_0(Vtest_bitcollect___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_const_0\n"); );
    // Init
    Vtest_bitcollect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bitcollect___024root*>(voidSelf);
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_bitcollect___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_const_0_sub_0(Vtest_bitcollect___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_const_0_sub_0\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+50,(0xaU),32);
    bufp->fullBit(oldp+51,(1U));
    bufp->fullCData(oldp+52,(4U),3);
    bufp->fullCData(oldp+53,(2U),3);
    bufp->fullCData(oldp+54,(1U),3);
    bufp->fullBit(oldp+55,(0U));
    bufp->fullIData(oldp+56,(0x2778a365U),32);
    bufp->fullIData(oldp+57,(0x41fdc9dU),32);
}

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_full_0_sub_0(Vtest_bitcollect___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_full_0\n"); );
    // Init
    Vtest_bitcollect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bitcollect___024root*>(voidSelf);
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_bitcollect___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_bitcollect___024root__trace_full_0_sub_0(Vtest_bitcollect___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root__trace_full_0_sub_0\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))));
    bufp->fullBit(oldp+2,((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))));
    bufp->fullBit(oldp+3,((1U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))));
    bufp->fullBit(oldp+4,((1U & vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a)));
    bufp->fullBit(oldp+5,((1U & (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b))));
    bufp->fullCData(oldp+6,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s),5);
    bufp->fullCData(oldp+7,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state),3);
    bufp->fullCData(oldp+8,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt),6);
    bufp->fullIData(oldp+9,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a),17);
    bufp->fullBit(oldp+10,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in));
    bufp->fullBit(oldp+11,((1U & (0x2778a365U >> ((
                                                   (0x10U 
                                                    & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                       >> 0xbU)) 
                                                   | (8U 
                                                      & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                         >> 7U))) 
                                                  | ((6U 
                                                      & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                           >> 4U))))))));
    bufp->fullCData(oldp+12,((((0x10U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                         >> 0xbU)) 
                               | (8U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                        >> 7U))) | 
                              ((6U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                      >> 6U)) | (1U 
                                                 & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                    >> 4U))))),5);
    bufp->fullSData(oldp+13,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b),16);
    bufp->fullBit(oldp+14,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in));
    bufp->fullBit(oldp+15,((1U & (0x2778a365U >> ((0x10U 
                                                   & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                      >> 8U)) 
                                                  | ((0xeU 
                                                      & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                           >> 4U))))))));
    bufp->fullCData(oldp+16,(((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                        >> 8U)) | (
                                                   (0xeU 
                                                    & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                         >> 4U))))),5);
    bufp->fullCData(oldp+17,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C0),5);
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                  ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b)))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+20,(((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                            & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                               ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+21,(((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                             ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                             : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                                  ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+23,(((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                            & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                               ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))));
    bufp->fullBit(oldp+24,(((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                             ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                                   ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                             : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in))));
    bufp->fullCData(oldp+25,((((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                               ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                             << 4U)) 
                                   | ((8U & ((0x41fdc9dU 
                                              >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                             << 3U)) 
                                      | (4U & (((0x41fdc9dU 
                                                 >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                  | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                           << 1U)))) 
                              ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s))),5);
    bufp->fullCData(oldp+26,(((((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                                ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                              << 4U)) 
                                    | ((8U & ((0x41fdc9dU 
                                               >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                              << 3U)) 
                                       | (4U & (((0x41fdc9dU 
                                                  >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                 ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                << 2U)))) 
                                   | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 1U)))) 
                               ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s)) 
                              ^ (1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5))))),5);
    bufp->fullBit(oldp+27,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce));
    bufp->fullBit(oldp+28,((1U & (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1)))));
    bufp->fullBit(oldp+29,(vlSelfRef.test_bitcollect__DOT__byte_ready));
    bufp->fullCData(oldp+30,(vlSelfRef.test_bitcollect__DOT__rand_byte),8);
    bufp->fullCData(oldp+31,(vlSelfRef.test_bitcollect__DOT__collector__DOT__shift_reg),8);
    bufp->fullCData(oldp+32,(vlSelfRef.test_bitcollect__DOT__collector__DOT__bit_count),3);
    bufp->fullCData(oldp+33,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5),5);
    bufp->fullCData(oldp+34,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C4),5);
    bufp->fullCData(oldp+35,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C3),5);
    bufp->fullCData(oldp+36,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C2),5);
    bufp->fullCData(oldp+37,(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1),5);
    bufp->fullCData(oldp+38,(((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                              ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                            << 4U)) 
                                  | ((8U & ((0x41fdc9dU 
                                             >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                            << 3U)) 
                                     | (4U & (((0x41fdc9dU 
                                                >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                               ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                              << 2U)))) 
                                 | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                          << 1U))))),5);
    bufp->fullCData(oldp+39,((((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                         << 4U)) | 
                               ((8U & ((0x41fdc9dU 
                                        >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                       << 3U)) | (4U 
                                                  & (((0x41fdc9dU 
                                                       >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                      ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                     << 2U)))) 
                              | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                       << 1U)))),5);
    bufp->fullBit(oldp+40,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)))));
    bufp->fullCData(oldp+41,((1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)))),5);
    bufp->fullBit(oldp+42,(vlSelfRef.test_bitcollect__DOT__clk));
    bufp->fullBit(oldp+43,(vlSelfRef.test_bitcollect__DOT__rst));
    bufp->fullBit(oldp+44,(vlSelfRef.test_bitcollect__DOT__trng_d1));
    bufp->fullBit(oldp+45,(vlSelfRef.test_bitcollect__DOT__trng_d2));
    bufp->fullCData(oldp+46,(vlSelfRef.test_bitcollect__DOT__trng_d3),5);
    bufp->fullBit(oldp+47,(((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                             ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d1)
                             : ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                                 ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                    & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in)))));
    bufp->fullBit(oldp+48,(((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                             ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d2)
                             : ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                                 ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                                    & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                                       ^ (0x2778a365U 
                                          >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                                 : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in)))));
    bufp->fullCData(oldp+49,(((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                               ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d3)
                               : ((((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                                    ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 4U)) 
                                        | ((8U & ((0x41fdc9dU 
                                                   >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                  << 3U)) 
                                           | (4U & 
                                              (((0x41fdc9dU 
                                                 >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                               << 2U)))) 
                                       | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 1U)))) 
                                   ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s)) 
                                  ^ (1U & (0x41fdc9dU 
                                           >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)))))),5);
}
