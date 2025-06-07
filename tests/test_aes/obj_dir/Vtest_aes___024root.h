// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_aes.h for the primary calling header

#ifndef VERILATED_VTEST_AES___024ROOT_H_
#define VERILATED_VTEST_AES___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_aes__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_aes___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ramfsm_tb__DOT__clk;
    CData/*0:0*/ ramfsm_tb__DOT__rst;
    CData/*0:0*/ ramfsm_tb__DOT__start;
    CData/*0:0*/ ramfsm_tb__DOT__done;
    CData/*0:0*/ ramfsm_tb__DOT__we_rng;
    CData/*0:0*/ ramfsm_tb__DOT__ack_rng;
    CData/*0:0*/ ramfsm_tb__DOT__ram_cyc_b;
    CData/*0:0*/ ramfsm_tb__DOT__ram_stb_b;
    CData/*0:0*/ ramfsm_tb__DOT__ram_ack_b;
    CData/*0:0*/ ramfsm_tb__DOT__ram_stall_b;
    CData/*0:0*/ ramfsm_tb__DOT__aes_cs;
    CData/*0:0*/ ramfsm_tb__DOT__aes_we;
    CData/*7:0*/ ramfsm_tb__DOT__aes_address;
    CData/*0:0*/ ramfsm_tb__DOT__dut__DOT__vld_out;
    CData/*3:0*/ ramfsm_tb__DOT__dut__DOT__state;
    CData/*3:0*/ ramfsm_tb__DOT__dut__DOT__next_state;
    CData/*2:0*/ ramfsm_tb__DOT__dut__DOT__key_word_index;
    CData/*1:0*/ ramfsm_tb__DOT__dut__DOT__block_word_index;
    CData/*1:0*/ ramfsm_tb__DOT__dut__DOT__result_word_index;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ramfsm_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ramfsm_tb__DOT__done__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ ramfsm_tb__DOT__ram_addr_b;
    IData/*31:0*/ ramfsm_tb__DOT__ram_data_out_b;
    IData/*31:0*/ ramfsm_tb__DOT__aes_write_data;
    IData/*31:0*/ ramfsm_tb__DOT__aes_read_data;
    IData/*31:0*/ ramfsm_tb__DOT__aes_status_counter;
    IData/*31:0*/ ramfsm_tb__DOT__dut__DOT__data_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 8> ramfsm_tb__DOT__dut__DOT__key_buffer;
    VlUnpacked<IData/*31:0*/, 4> ramfsm_tb__DOT__dut__DOT__block_buffer;
    VlUnpacked<IData/*31:0*/, 4> ramfsm_tb__DOT__dut__DOT__result_buffer;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc0f6377f__0;
    VlTriggerScheduler __VtrigSched_h0c6f08b0__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_aes__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_aes___024root(Vtest_aes__Syms* symsp, const char* v__name);
    ~Vtest_aes___024root();
    VL_UNCOPYABLE(Vtest_aes___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
