// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon___024root.h"

VL_ATTR_COLD void Vtest_simon___024root___eval_initial__TOP(Vtest_simon___024root* vlSelf);
VlCoroutine Vtest_simon___024root___eval_initial__TOP__Vtiming__0(Vtest_simon___024root* vlSelf);
VlCoroutine Vtest_simon___024root___eval_initial__TOP__Vtiming__1(Vtest_simon___024root* vlSelf);
VlCoroutine Vtest_simon___024root___eval_initial__TOP__Vtiming__2(Vtest_simon___024root* vlSelf);

void Vtest_simon___024root___eval_initial(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_initial\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_simon___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_simon___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_simon___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtest_simon___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__clk__0 
        = vlSelfRef.test_simon__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__rst__0 
        = vlSelfRef.test_simon__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i__0 
        = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i;
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT__key_in__0 
        = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in;
    vlSelfRef.__Vtrigprevexpr_h827260e6__0 = (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state));
}

VL_INLINE_OPT VlCoroutine Vtest_simon___024root___eval_initial__TOP__Vtiming__0(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "test_simon.sv", 
                                         62);
    VL_WRITEF_NX("[TB] TIMEOUT: Simulation finished after 5000 time units.\n",0);
    VL_FINISH_MT("test_simon.sv", 64, "");
}

VL_INLINE_OPT VlCoroutine Vtest_simon___024root___eval_initial__TOP__Vtiming__1(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtask_test_simon__DOT__write_rng_word__1__addr;
    __Vtask_test_simon__DOT__write_rng_word__1__addr = 0;
    SData/*8:0*/ __Vtask_test_simon__DOT__write_rng_word__5__addr;
    __Vtask_test_simon__DOT__write_rng_word__5__addr = 0;
    // Body
    VL_WRITEF_NX("=== RNG + SIMON Cipher Top-Level TB ===\n",0);
    vlSelfRef.test_simon__DOT__rst = 0U;
    vlSelfRef.test_simon__DOT__clk = 0U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_simon__DOT__rst = 1U;
    vlSelfRef.test_simon__DOT__key_we = 0U;
    vlSelfRef.test_simon__DOT__key_addr = 0U;
    vlSelfRef.test_simon__DOT__cipher_en = 0U;
    vlSelfRef.test_simon__DOT__plaintext = 0xdeadbeefU;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_simon__DOT__rst = 0U;
    VL_WRITEF_NX("[TB] Reset deasserted\n[TB] Writing random key to RAM at 0x10 and 0x11\n",0);
    __Vtask_test_simon__DOT__write_rng_word__1__addr = 0x10U;
    vlSelfRef.test_simon__DOT__key_addr = __Vtask_test_simon__DOT__write_rng_word__1__addr;
    vlSelfRef.test_simon__DOT__key_we = 1U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_simon__DOT__key_ack)))) {
        co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_simon.clk)", 
                                                             "test_simon.sv", 
                                                             47);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.test_simon__DOT__key_we = 0U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_test_simon__DOT__write_rng_word__5__addr = 0x11U;
    vlSelfRef.test_simon__DOT__key_addr = __Vtask_test_simon__DOT__write_rng_word__5__addr;
    vlSelfRef.test_simon__DOT__key_we = 1U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_simon__DOT__key_ack)))) {
        co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_simon.clk)", 
                                                             "test_simon.sv", 
                                                             47);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.test_simon__DOT__key_we = 0U;
    co_await vlSelfRef.__VtrigSched_h0ee11579__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_simon.clk)", 
                                                         "test_simon.sv", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[TB] Starting cipher operation\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "test_simon.sv", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_simon__DOT__cipher_en = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_simon.sv", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_simon__DOT__cipher_en = 0U;
    while ((3U != (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))) {
        co_await vlSelfRef.__VtrigSched_he645a5fe__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (2'h3 == test_simon.dut.cipher.current_state))", 
                                                             "test_simon.sv", 
                                                             99);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[TB] Cipher complete!\n[TB] Cipher text = 0x%08x\n",0,
                 32,vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_simon.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("test_simon.sv", 103, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtest_simon___024root___eval_initial__TOP__Vtiming__2(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_simon.sv", 
                                             43);
        vlSelfRef.test_simon__DOT__clk = (1U & (~ (IData)(vlSelfRef.test_simon__DOT__clk)));
    }
}

void Vtest_simon___024root___act_comb__TOP__0(Vtest_simon___024root* vlSelf);

void Vtest_simon___024root___eval_act(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_act\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x31ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_simon___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtest_simon__ConstPool__TABLE_hc60ca385_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtest_simon__ConstPool__TABLE_hd20cd422_0;

VL_INLINE_OPT void Vtest_simon___024root___act_comb__TOP__0(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___act_comb__TOP__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.test_simon__DOT__cipher_en) 
                     << 3U) | (((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                << 2U) | (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state)));
    vlSelfRef.test_simon__DOT__dut__DOT__next_state 
        = Vtest_simon__ConstPool__TABLE_hc60ca385_0
        [__Vtableidx1];
    vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en 
        = Vtest_simon__ConstPool__TABLE_hd20cd422_0
        [__Vtableidx1];
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state 
        = ((IData)(vlSelfRef.test_simon__DOT__rst) ? 0U
            : (((0U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__simon_en_reg))
                ? 1U : ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                         ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                  & (0x1fU > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                  ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                           & (0x1fU 
                                              <= (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                           ? 3U : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                                    ? 3U
                                                    : 0U))))));
    vlSelfRef.test_simon__DOT__dut__DOT__pB_addr = 
        (0x1ffU & ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))
                    ? (IData)(vlSelfRef.test_simon__DOT__key_addr)
                    : ((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))
                        ? ((IData)(4U) + (IData)(vlSelfRef.test_simon__DOT__key_addr))
                        : 0U)));
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_ciphertext 
        = (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
            & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state)))
            ? vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y
            : ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                ? vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire
                : 0U));
    if ((0x100U & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr))) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__key_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram2_dout;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__key_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram1_dout;
    }
}

VL_INLINE_OPT void Vtest_simon___024root___nba_sequent__TOP__0(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___nba_sequent__TOP__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0;
    __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0;
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1;
    __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1;
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2;
    __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2;
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3;
    __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3;
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0;
    __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1;
    __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2;
    __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3;
    __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3;
    __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3 = 0;
    SData/*15:0*/ __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0;
    __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0;
    __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0 = 0;
    SData/*15:0*/ __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1;
    __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1 = 0;
    CData/*4:0*/ __VdlyDim0__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1;
    __VdlyDim0__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1 = 0;
    CData/*0:0*/ __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1;
    __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1 = 0;
    // Body
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0 = 0U;
    __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1 = 0U;
    if ((((~ ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
              >> 8U)) & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe))
          ? 1U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0 
            = (0xffU & vlSelfRef.test_simon__DOT__dut__DOT__ram1_din);
        __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0 = 1U;
    }
    if ((((~ ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
              >> 8U)) & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe))
          ? 2U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1 
            = (0xffU & (vlSelfRef.test_simon__DOT__dut__DOT__ram1_din 
                        >> 8U));
        __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1 = 1U;
    }
    if ((((~ ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
              >> 8U)) & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe))
          ? 4U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2 
            = (0xffU & (vlSelfRef.test_simon__DOT__dut__DOT__ram1_din 
                        >> 0x10U));
        __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2 = 1U;
    }
    if ((((~ ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
              >> 8U)) & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe))
          ? 8U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3 
            = (vlSelfRef.test_simon__DOT__dut__DOT__ram1_din 
               >> 0x18U);
        __VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3 = 1U;
    }
    if ((((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe) 
          & ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
             >> 8U)) ? 1U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0 
            = (0xffU & vlSelfRef.test_simon__DOT__dut__DOT__ram1_din);
        __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe) 
          & ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
             >> 8U)) ? 2U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1 
            = (0xffU & (vlSelfRef.test_simon__DOT__dut__DOT__ram1_din 
                        >> 8U));
        __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1 = 1U;
    }
    if ((((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe) 
          & ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
             >> 8U)) ? 4U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2 
            = (0xffU & (vlSelfRef.test_simon__DOT__dut__DOT__ram1_din 
                        >> 0x10U));
        __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2 = 1U;
    }
    if ((((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe) 
          & ((IData)(vlSelfRef.test_simon__DOT__key_addr) 
             >> 8U)) ? 8U : 0U)) {
        __VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3 
            = (vlSelfRef.test_simon__DOT__dut__DOT__ram1_din 
               >> 0x18U);
        __VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr));
        __VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3 = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.test_simon__DOT__rst)))) {
        if ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))) {
            __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0 
                = (0xffffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__simon_key));
            __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0 = 1U;
        } else if ((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))) {
            __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1 
                = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_i;
            __VdlyDim0__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1 
                = (0x1fU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter));
            __VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1 = 1U;
        }
    }
    vlSelfRef.test_simon__DOT__dut__DOT__ram1_dout 
        = vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM
        [(0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr))];
    vlSelfRef.test_simon__DOT__dut__DOT__ram2_dout 
        = vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM
        [(0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr))];
    if (vlSelfRef.test_simon__DOT__rst) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter = 0U;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x = 0U;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter 
            = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
            = ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                ? vlSelfRef.test_simon__DOT__plaintext
                : vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y);
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[0U] 
            = __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v0;
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[__VdlyDim0__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1] 
            = __VdlyVal__test_simon__DOT__dut__DOT__cipher__DOT__key_schedule__v1;
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0] 
            = ((0xffffff00U & vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0]) 
               | (IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v0));
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1] 
            = ((0xffff00ffU & vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1]) 
               | ((IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2] 
            = ((0xff00ffffU & vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2]) 
               | ((IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3] 
            = ((0xffffffU & vlSelfRef.test_simon__DOT__dut__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3]) 
               | ((IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram1__DOT__RAM__v3) 
                  << 0x18U));
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0] 
            = ((0xffffff00U & vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0]) 
               | (IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v0));
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1] 
            = ((0xffff00ffU & vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1]) 
               | ((IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2] 
            = ((0xff00ffffU & vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2]) 
               | ((IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM[__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3] 
            = ((0xffffffU & vlSelfRef.test_simon__DOT__dut__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3]) 
               | ((IData)(__VdlyVal__test_simon__DOT__dut__DOT__ram2__DOT__RAM__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void Vtest_simon___024root___nba_sequent__TOP__2(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___nba_sequent__TOP__2\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i))) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_i 
            = (0xffffU & (IData)((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
                                  >> (0x3fU & ((VL_SHIFTL_III(6,32,32, 
                                                              ((IData)(1U) 
                                                               + (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i)), 4U) 
                                                - (IData)(1U)) 
                                               - (IData)(0xfU))))));
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp 
            = ((0xe000U & ((IData)((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
                                    >> 0x30U)) << 0xdU)) 
               | (0x1fffU & (IData)((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
                                     >> 0x33U))));
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror3 
            = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp2 
            = (0xffffU & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp) 
                          ^ (IData)((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
                                     >> 0x10U))));
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp 
            = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp2;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror1 
            = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp) 
               ^ ((0x8000U & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp) 
                              << 0xfU)) | (0x7fffU 
                                           & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp) 
                                              >> 1U))));
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp 
            = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror1;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__index 
            = (0xffU & ((0x3eU > ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i) 
                                  - (IData)(4U))) ? 
                        ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i) 
                         - (IData)(4U)) : (((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i) 
                                            - (IData)(4U)) 
                                           - (IData)(0x3eU))));
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_i 
            = (0xffffU & (3U ^ (((~ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in)) 
                                 ^ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp)) 
                                ^ ((0x3dU >= (0x3fU 
                                              & ((IData)(0x3dU) 
                                                 - (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__index)))) 
                                   && (1U & (IData)(
                                                    (0x3e8958737d12b0e6ULL 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3dU) 
                                                         - (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__index))))))))));
    }
}

VL_INLINE_OPT void Vtest_simon___024root___nba_sequent__TOP__3(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___nba_sequent__TOP__3\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4;
    test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4 = 0;
    // Body
    if (vlSelfRef.test_simon__DOT__rst) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire = 0U;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state = 0U;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire 
            = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_ciphertext;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state 
            = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state;
    }
    test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4 
        = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
           + (2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)));
    if ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter = 0U;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i = 0U;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter 
            = (0xffU & test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4);
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i 
            = (0x7fU & test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4);
    }
}

VL_INLINE_OPT void Vtest_simon___024root___nba_comb__TOP__0(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___nba_comb__TOP__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y 
        = ((0xffff0000U & ((((0xfffe0000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             << 1U)) 
                             | (0x10000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                            >> 0xfU))) 
                            & ((0xff000000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                               << 8U)) 
                               | (0xff0000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                               >> 8U)))) 
                           ^ ((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                               << 0x10U) ^ (((0xfffc0000U 
                                              & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                                 << 2U)) 
                                             | (0x30000U 
                                                & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                                   >> 0xeU))) 
                                            ^ (((4U 
                                                 > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
                                                 ? (IData)(
                                                           (vlSelfRef.test_simon__DOT__dut__DOT__simon_key 
                                                            >> 
                                                            (0x3fU 
                                                             & ((VL_SHIFTL_III(6,6,32, 
                                                                               ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)), 4U) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(0xfU)))))
                                                 : 
                                                vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                                [(0x1fU 
                                                  & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))]) 
                                               << 0x10U))))) 
           | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
              >> 0x10U));
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
        = ((4U > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
            ? vlSelfRef.test_simon__DOT__dut__DOT__simon_key
            : (((QData)((IData)(((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                  [(0x1fU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))] 
                                  << 0x10U) | vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                 [(0x1fU & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                            - (IData)(1U)))]))) 
                << 0x20U) | (QData)((IData)(((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                              [(0x1fU 
                                                & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                                   - (IData)(2U)))] 
                                              << 0x10U) 
                                             | vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                             [(0x1fU 
                                               & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                                  - (IData)(3U)))])))));
}

VL_INLINE_OPT void Vtest_simon___024root___nba_comb__TOP__1(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___nba_comb__TOP__1\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.test_simon__DOT__dut__DOT__pB_addr = 
        (0x1ffU & ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))
                    ? (IData)(vlSelfRef.test_simon__DOT__key_addr)
                    : ((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))
                        ? ((IData)(4U) + (IData)(vlSelfRef.test_simon__DOT__key_addr))
                        : 0U)));
    __Vtableidx1 = (((IData)(vlSelfRef.test_simon__DOT__cipher_en) 
                     << 3U) | (((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                << 2U) | (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state)));
    vlSelfRef.test_simon__DOT__dut__DOT__next_state 
        = Vtest_simon__ConstPool__TABLE_hc60ca385_0
        [__Vtableidx1];
    vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en 
        = Vtest_simon__ConstPool__TABLE_hd20cd422_0
        [__Vtableidx1];
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state 
        = ((IData)(vlSelfRef.test_simon__DOT__rst) ? 0U
            : (((0U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__simon_en_reg))
                ? 1U : ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                         ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                  & (0x1fU > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                  ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                           & (0x1fU 
                                              <= (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                           ? 3U : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                                    ? 3U
                                                    : 0U))))));
    if ((0x100U & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr))) {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__key_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram2_dout;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__ram1_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__ram2_addr 
            = (0xffU & (IData)(vlSelfRef.test_simon__DOT__key_addr));
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram1_dout;
    }
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_ciphertext 
        = (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
            & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state)))
            ? vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y
            : ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                ? vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire
                : 0U));
}

void Vtest_simon___024root___timing_resume(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___timing_resume\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0ee11579__0.resume(
                                                   "@(posedge test_simon.clk)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he645a5fe__0.resume(
                                                   "@( (2'h3 == test_simon.dut.cipher.current_state))");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_simon___024root___timing_commit(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___timing_commit\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0ee11579__0.commit(
                                                   "@(posedge test_simon.clk)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he645a5fe__0.commit(
                                                   "@( (2'h3 == test_simon.dut.cipher.current_state))");
    }
}

void Vtest_simon___024root___eval_triggers__act(Vtest_simon___024root* vlSelf);

bool Vtest_simon___024root___eval_phase__act(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_phase__act\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_simon___024root___eval_triggers__act(vlSelf);
    Vtest_simon___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_simon___024root___timing_resume(vlSelf);
        Vtest_simon___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtest_simon___024root___eval_nba(Vtest_simon___024root* vlSelf);

bool Vtest_simon___024root___eval_phase__nba(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_phase__nba\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_simon___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__nba(Vtest_simon___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__act(Vtest_simon___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_simon___024root___eval(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtest_simon___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_simon.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_simon___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_simon.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_simon___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_simon___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_simon___024root___eval_debug_assertions(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_debug_assertions\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
