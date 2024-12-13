// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_memory.h"
#include "Vdata_memory__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdata_memory::Vdata_memory(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_memory__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , modeBU{vlSymsp->TOP.modeBU}
    , ResultSrc{vlSymsp->TOP.ResultSrc}
    , WE{vlSymsp->TOP.WE}
    , A{vlSymsp->TOP.A}
    , WD{vlSymsp->TOP.WD}
    , RD{vlSymsp->TOP.RD}
    , Result{vlSymsp->TOP.Result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdata_memory::Vdata_memory(const char* _vcname__)
    : Vdata_memory(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_memory::~Vdata_memory() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdata_memory___024root___eval_initial(Vdata_memory___024root* vlSelf);
void Vdata_memory___024root___eval_settle(Vdata_memory___024root* vlSelf);
void Vdata_memory___024root___eval(Vdata_memory___024root* vlSelf);
QData Vdata_memory___024root___change_request(Vdata_memory___024root* vlSelf);
#ifdef VL_DEBUG
void Vdata_memory___024root___eval_debug_assertions(Vdata_memory___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_memory___024root___final(Vdata_memory___024root* vlSelf);

static void _eval_initial_loop(Vdata_memory__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdata_memory___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdata_memory___024root___eval_settle(&(vlSymsp->TOP));
        Vdata_memory___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdata_memory___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("data_memory.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdata_memory___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdata_memory::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_memory::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_memory___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdata_memory___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdata_memory___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("data_memory.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdata_memory___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vdata_memory::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdata_memory::final() {
    Vdata_memory___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_memory::hierName() const { return vlSymsp->name(); }
const char* Vdata_memory::modelName() const { return "Vdata_memory"; }
unsigned Vdata_memory::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdata_memory::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdata_memory___024root__trace_init_top(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdata_memory___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdata_memory___024root__trace_register(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdata_memory::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdata_memory___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
