// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEST_SIMON__SYMS_H_
#define VERILATED_VTEST_SIMON__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtest_simon.h"

// INCLUDE MODULE CLASSES
#include "Vtest_simon___024root.h"
#include "Vtest_simon_trng.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtest_simon__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtest_simon* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtest_simon___024root          TOP;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst;
    Vtest_simon_trng               TOP__test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst;

    // CONSTRUCTORS
    Vtest_simon__Syms(VerilatedContext* contextp, const char* namep, Vtest_simon* modelp);
    ~Vtest_simon__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
