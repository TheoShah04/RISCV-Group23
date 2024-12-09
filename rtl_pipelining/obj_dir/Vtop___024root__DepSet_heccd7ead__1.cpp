// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cache_FSM__02Eclk & 0xfeU))) {
        Verilated::overWidthError("cache_FSM.clk");}
    if (VL_UNLIKELY((vlSelf->cache_FSM__02Erst & 0xfeU))) {
        Verilated::overWidthError("cache_FSM.rst");}
    if (VL_UNLIKELY((vlSelf->top__02Eclk & 0xfeU))) {
        Verilated::overWidthError("top.clk");}
    if (VL_UNLIKELY((vlSelf->top__02Erst & 0xfeU))) {
        Verilated::overWidthError("top.rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
