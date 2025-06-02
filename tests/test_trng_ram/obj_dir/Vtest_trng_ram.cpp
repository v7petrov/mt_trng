// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_trng_ram__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtest_trng_ram::Vtest_trng_ram(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest_trng_ram__Syms(contextp(), _vcname__, this)}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst}
    , __PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst{vlSymsp->TOP.__PVT__test_rng_ram__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtest_trng_ram::Vtest_trng_ram(const char* _vcname__)
    : Vtest_trng_ram(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest_trng_ram::~Vtest_trng_ram() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest_trng_ram___024root___eval_debug_assertions(Vtest_trng_ram___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_trng_ram___024root___eval_static(Vtest_trng_ram___024root* vlSelf);
void Vtest_trng_ram___024root___eval_initial(Vtest_trng_ram___024root* vlSelf);
void Vtest_trng_ram___024root___eval_settle(Vtest_trng_ram___024root* vlSelf);
void Vtest_trng_ram___024root___eval(Vtest_trng_ram___024root* vlSelf);

void Vtest_trng_ram::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_trng_ram::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_trng_ram___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest_trng_ram___024root___eval_static(&(vlSymsp->TOP));
        Vtest_trng_ram___024root___eval_initial(&(vlSymsp->TOP));
        Vtest_trng_ram___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest_trng_ram___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtest_trng_ram::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtest_trng_ram::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtest_trng_ram::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtest_trng_ram::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtest_trng_ram::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest_trng_ram___024root___eval_final(Vtest_trng_ram___024root* vlSelf);

VL_ATTR_COLD void Vtest_trng_ram::final() {
    Vtest_trng_ram___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest_trng_ram::hierName() const { return vlSymsp->name(); }
const char* Vtest_trng_ram::modelName() const { return "Vtest_trng_ram"; }
unsigned Vtest_trng_ram::threads() const { return 1; }
void Vtest_trng_ram::prepareClone() const { contextp()->prepareClone(); }
void Vtest_trng_ram::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtest_trng_ram::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtest_trng_ram___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtest_trng_ram___024root__trace_init_top(Vtest_trng_ram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_trng_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_trng_ram___024root*>(voidSelf);
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_trng_ram___024root__trace_decl_types(tracep);
    Vtest_trng_ram___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_trng_ram___024root__trace_register(Vtest_trng_ram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_trng_ram::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtest_trng_ram::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest_trng_ram___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
