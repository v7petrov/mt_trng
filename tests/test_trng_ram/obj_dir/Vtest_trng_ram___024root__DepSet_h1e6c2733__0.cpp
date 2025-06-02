// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng_ram.h for the primary calling header

#include "Vtest_trng_ram__pch.h"
#include "Vtest_trng_ram__Syms.h"
#include "Vtest_trng_ram___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__0(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 0;
    IData/*31:0*/ __Vtask_test_rng_ram__DOT__verify_rng_contents__1__count;
    __Vtask_test_rng_ram__DOT__verify_rng_contents__1__count = 0;
    IData/*31:0*/ __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i;
    __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.test_rng_ram__DOT__clk = 0U;
    vlSelfRef.test_rng_ram__DOT__rst = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = 0U;
    vlSelfRef.test_rng_ram__DOT__pA_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pA_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pA_wb_we_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pA_wb_addr_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pA_wb_data_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_data_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "test_trng_ram.sv", 
                                         139);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__rst = 0U;
    VL_WRITEF_NX("Triggering RNG writes...\n",0);
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 0U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 1U;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 2U;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 2U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 3U;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 3U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 4U;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 4U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 5U;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 5U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 6U;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 6U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 7U;
    __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index = 7U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__addr_rng = (0x1ffU 
                                             & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__we_rng = 1U;
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__we_rng = 0U;
    while ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__ack_rng)))) {
        co_await vlSelfRef.__VtrigSched_ha5d3732f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_rng_ram.ack_rng)", 
                                                             "test_trng_ram.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = (0x1ffU 
                                                 & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index);
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                     | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
        co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                             "test_trng_ram.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_rng_ram.clk)", 
                                                         "test_trng_ram.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_rng_ram__DOT__golden_data[(7U & __Vtask_test_rng_ram__DOT__trigger_rng_write__0__index)] 
        = vlSelfRef.test_rng_ram__DOT__pB_wb_data_o;
    vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
    vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
    vlSelfRef.test_rng_ram__DOT__unnamedblk2__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test_trng_ram.sv", 
                                         147);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Verifying RNG RAM contents...\n",0);
    __Vtask_test_rng_ram__DOT__verify_rng_contents__1__count = 8U;
    __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i, __Vtask_test_rng_ram__DOT__verify_rng_contents__1__count)) {
        vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i = 
            (0x1ffU & __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i);
        vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 1U;
        vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 1U;
        vlSelfRef.test_rng_ram__DOT__pB_wb_we_i = 0U;
        while ((1U & (~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                         | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg))))) {
            co_await vlSelfRef.__VtrigSched_h98049acd__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))", 
                                                                 "test_trng_ram.sv", 
                                                                 112);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        co_await vlSelfRef.__VtrigSched_h932be142__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_rng_ram.clk)", 
                                                             "test_trng_ram.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("RAM[%0d] = 0x%08x\n",0,32,__Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i,
                     32,vlSelfRef.test_rng_ram__DOT__pB_wb_data_o);
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((vlSelfRef.test_rng_ram__DOT__pB_wb_data_o 
                              != vlSelfRef.test_rng_ram__DOT__golden_data
                              [(7U & __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i)])))) {
                VL_WRITEF_NX("[%0t] %%Error: test_trng_ram.sv:117: Assertion failed in %Ntest_rng_ram.verify_rng_contents.unnamedblk1: Mismatch at addr %0d! Expected 0x%08x, got 0x%08x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i,
                             32,vlSelfRef.test_rng_ram__DOT__golden_data
                             [(7U & __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i)],
                             32,vlSelfRef.test_rng_ram__DOT__pB_wb_data_o);
                VL_STOP_MT("test_trng_ram.sv", 117, "");
            }
        }
        vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i = 0U;
        vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i = 0U;
        __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_test_rng_ram__DOT__verify_rng_contents__1__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("Test completed.\n",0);
    VL_FINISH_MT("test_trng_ram.sv", 153, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__act(Vtest_trng_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_trng_ram___024root___eval_triggers__act(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_triggers__act\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h103354b3__0;
    __Vtrigcurrexpr_h103354b3__0 = 0;
    __Vtrigcurrexpr_h103354b3__0 = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                                    | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg));
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_rng_ram__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.test_rng_ram__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.test_rng_ram__DOT__ack_rng) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__ack_rng__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(__Vtrigcurrexpr_h103354b3__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_h103354b3__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__clk__0 
        = vlSelfRef.test_rng_ram__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__rst__0 
        = vlSelfRef.test_rng_ram__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__ack_rng__0 
        = vlSelfRef.test_rng_ram__DOT__ack_rng;
    vlSelfRef.__Vtrigprevexpr_h103354b3__0 = __Vtrigcurrexpr_h103354b3__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_trng_ram___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtest_trng_ram___024root___act_comb__TOP__0(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___act_comb__TOP__0\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0;
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0 = 0;
    CData/*0:0*/ test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1;
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1 = 0;
    // Body
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final = 0xfU;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final 
            = (((((((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                    << 0x1fU) | (0x40000000U & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0x1eU))) 
                  | ((0x20000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                     << 0x1dU)) | (0x10000000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x1cU)))) 
                 | (((0x8000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x1bU)) | (0x4000000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x1aU))) 
                    | ((0x2000000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x19U)) | 
                       (0x1000000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x18U))))) 
                | ((((0x800000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0x17U)) | (0x400000U 
                                                 & ((0x2778a365U 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                    << 0x16U))) 
                    | ((0x200000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                     << 0x15U)) | (0x100000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x14U)))) 
                   | (((0x80000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x13U)) | (0x40000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x12U))) 
                      | ((0x20000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x11U)) | 
                         (0x10000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x10U)))))) 
               | (((((0x8000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0xbU)) | (0x400U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 9U)) | (0x100U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 7U)) | (0x40U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 6U))) 
                      | ((0x20U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 5U)) | (0x10U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 4U)))) 
                     | (((8U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                << 3U)) | (4U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 2U))) 
                        | ((2U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 1U)) | (1U & (0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final 
            = vlSelfRef.test_rng_ram__DOT__addr_rng;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_data_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_addr_i;
    }
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe) 
           | ((IData)(vlSelfRef.test_rng_ram__DOT__pA_wb_cyc_i) 
              & (IData)(vlSelfRef.test_rng_ram__DOT__pA_wb_stb_i)));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same 
        = (1U & (~ (((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
                     ^ (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i)) 
                    >> 8U)));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel) 
              & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req)));
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2) 
               & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice))) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel));
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0 
        = ((~ ((~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice)) 
               & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2))) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
               >> 8U)) & (IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2 
        = ((IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
              >> 8U));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i) 
               >> 8U)) & (IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2 
        = ((IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i) 
              >> 8U));
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_data_i;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we = 0U;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & 0U);
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din = 0U;
    }
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_data_i;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we = 0U;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & 0U);
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din = 0U;
    }
}

void Vtest_trng_ram___024root___nba_sequent__TOP__0(Vtest_trng_ram___024root* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_trng_ram_trng* vlSelf);
void Vtest_trng_ram___024root___nba_sequent__TOP__1(Vtest_trng_ram___024root* vlSelf);
void Vtest_trng_ram___024root___nba_sequent__TOP__2(Vtest_trng_ram___024root* vlSelf);
void Vtest_trng_ram___024root___nba_comb__TOP__0(Vtest_trng_ram___024root* vlSelf);
void Vtest_trng_ram___024root___nba_comb__TOP__1(Vtest_trng_ram___024root* vlSelf);

void Vtest_trng_ram___024root___eval_nba(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_nba\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_trng_ram___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst));
        Vtest_trng_ram_trng___nba_sequent__TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst));
        Vtest_trng_ram___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_trng_ram___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_trng_ram___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_trng_ram___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_trng_ram___024root___nba_sequent__TOP__1(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___nba_sequent__TOP__1\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__test_rng_ram__DOT__dut__DOT__rng_write_active;
    __Vdly__test_rng_ram__DOT__dut__DOT__rng_write_active = 0;
    // Body
    __Vdly__test_rng_ram__DOT__dut__DOT__rng_write_active 
        = vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_active;
    vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_gen__DOT__o_valid_bus 
        = ((((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en)) 
                << 0x1fU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en)) 
                             << 0x1eU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x1bU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x1aU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x19U) 
                                             | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x17U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x16U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x15U) 
                                             | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x14U))) 
               | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0x13U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en)) 
                                 << 0x12U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x11U) 
                                               | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0xfU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 0xeU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0xdU) 
                                           | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0xcU))) 
               | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0xbU) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 0xaU)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 9U) 
                                             | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 8U)))) 
              | ((((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 7U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 6U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 5U) | 
                                         (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 4U))) 
                 | (((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                       & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en)) 
                      << 3U) | (((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 2U)) | ((((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 1U) 
                                           | ((IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en)))))));
    if (vlSelfRef.test_rng_ram__DOT__rst) {
        __Vdly__test_rng_ram__DOT__dut__DOT__rng_write_active = 0U;
    } else {
        if (((IData)(vlSelfRef.test_rng_ram__DOT__we_rng) 
             & (~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_active)))) {
            __Vdly__test_rng_ram__DOT__dut__DOT__rng_write_active = 1U;
        }
        if (vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe) {
            __Vdly__test_rng_ram__DOT__dut__DOT__rng_write_active = 0U;
        }
    }
    vlSelfRef.test_rng_ram__DOT__ack_rng = ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__rst))) 
                                            && (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_active 
        = __Vdly__test_rng_ram__DOT__dut__DOT__rng_write_active;
    vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_active) 
           & (0xffffffffU == vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_gen__DOT__o_valid_bus));
}

VL_INLINE_OPT void Vtest_trng_ram___024root___nba_comb__TOP__1(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___nba_comb__TOP__1\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0;
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0 = 0;
    CData/*0:0*/ test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1;
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1 = 0;
    // Body
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final = 0xfU;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final 
            = (((((((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                    << 0x1fU) | (0x40000000U & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0x1eU))) 
                  | ((0x20000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                     << 0x1dU)) | (0x10000000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x1cU)))) 
                 | (((0x8000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x1bU)) | (0x4000000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x1aU))) 
                    | ((0x2000000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x19U)) | 
                       (0x1000000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x18U))))) 
                | ((((0x800000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0x17U)) | (0x400000U 
                                                 & ((0x2778a365U 
                                                     >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                    << 0x16U))) 
                    | ((0x200000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                     << 0x15U)) | (0x100000U 
                                                   & ((0x2778a365U 
                                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                      << 0x14U)))) 
                   | (((0x80000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x13U)) | (0x40000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x12U))) 
                      | ((0x20000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x11U)) | 
                         (0x10000U & ((0x2778a365U 
                                       >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                      << 0x10U)))))) 
               | (((((0x8000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0xbU)) | (0x400U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 9U)) | (0x100U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 7U)) | (0x40U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 6U))) 
                      | ((0x20U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 5U)) | (0x10U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 4U)))) 
                     | (((8U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                << 3U)) | (4U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 2U))) 
                        | ((2U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 1U)) | (1U & (0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final 
            = vlSelfRef.test_rng_ram__DOT__addr_rng;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_data_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final 
            = vlSelfRef.test_rng_ram__DOT__pA_wb_addr_i;
    }
    vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__rng_write_strobe) 
           | ((IData)(vlSelfRef.test_rng_ram__DOT__pA_wb_cyc_i) 
              & (IData)(vlSelfRef.test_rng_ram__DOT__pA_wb_stb_i)));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same 
        = (1U & (~ (((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
                     ^ (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i)) 
                    >> 8U)));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel) 
              & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req)));
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2) 
               & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice))) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel));
    test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0 
        = ((~ ((~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice)) 
               & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2))) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
               >> 8U)) & (IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2 
        = ((IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_1) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final) 
              >> 8U));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1 
        = ((~ ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i) 
               >> 8U)) & (IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2 
        = ((IData)(test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_0) 
           & ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i) 
              >> 8U));
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_data_i;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we = 0U;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy 
            = (0xffU & 0U);
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din = 0U;
    }
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_final;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_addr_final));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_data_final;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_we_i;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_addr_i));
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
            = vlSelfRef.test_rng_ram__DOT__pB_wb_data_i;
    } else {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we = 0U;
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy 
            = (0xffU & 0U);
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din = 0U;
    }
}
