// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory.h for the primary calling header

#include "verilated.h"

#include "Vdata_memory___024root.h"

VL_INLINE_OPT void Vdata_memory___024root___sequent__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v2;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v4;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v5;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v6;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v7;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v7;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__ram_array__v7;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v8;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v8;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v9;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v9;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v10;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__ram_array__v10;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__ram_array__v11;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__ram_array__v11;
    // Body
    __Vdlyvset__data_memory__DOT__ram_array__v0 = 0U;
    __Vdlyvset__data_memory__DOT__ram_array__v1 = 0U;
    __Vdlyvset__data_memory__DOT__ram_array__v2 = 0U;
    __Vdlyvset__data_memory__DOT__ram_array__v4 = 0U;
    __Vdlyvset__data_memory__DOT__ram_array__v5 = 0U;
    __Vdlyvset__data_memory__DOT__ram_array__v7 = 0U;
    __Vdlyvset__data_memory__DOT__ram_array__v11 = 0U;
    if ((0x1ffffU > vlSelf->A)) {
        if (VL_UNLIKELY((0x1ffffU <= vlSelf->A))) {
            VL_WRITEF("Out of bounds\n");
        }
        if (vlSelf->WE) {
            if ((4U & (IData)(vlSelf->modeBU))) {
                if ((2U & (IData)(vlSelf->modeBU))) {
                    __Vdlyvset__data_memory__DOT__ram_array__v0 = 1U;
                    __Vdlyvdim0__data_memory__DOT__ram_array__v0 
                        = (0x1fffcU & vlSelf->A);
                } else if ((1U & (IData)(vlSelf->modeBU))) {
                    __Vdlyvval__data_memory__DOT__ram_array__v1 
                        = (0xffU & vlSelf->WD);
                    __Vdlyvset__data_memory__DOT__ram_array__v1 = 1U;
                    __Vdlyvdim0__data_memory__DOT__ram_array__v1 
                        = (0x1fffcU & vlSelf->A);
                } else {
                    __Vdlyvval__data_memory__DOT__ram_array__v2 
                        = (0xffU & (vlSelf->WD >> 8U));
                    __Vdlyvset__data_memory__DOT__ram_array__v2 = 1U;
                    __Vdlyvdim0__data_memory__DOT__ram_array__v2 
                        = (0x1fffcU & vlSelf->A);
                    __Vdlyvval__data_memory__DOT__ram_array__v3 
                        = (0xffU & vlSelf->WD);
                    __Vdlyvdim0__data_memory__DOT__ram_array__v3 
                        = (0x1ffffU & ((IData)(1U) 
                                       + (0x1fffcU 
                                          & vlSelf->A)));
                }
            } else if ((2U & (IData)(vlSelf->modeBU))) {
                if ((1U & (IData)(vlSelf->modeBU))) {
                    __Vdlyvval__data_memory__DOT__ram_array__v4 
                        = (0xffU & vlSelf->WD);
                    __Vdlyvset__data_memory__DOT__ram_array__v4 = 1U;
                    __Vdlyvdim0__data_memory__DOT__ram_array__v4 
                        = (0x1fffcU & vlSelf->A);
                } else {
                    __Vdlyvval__data_memory__DOT__ram_array__v5 
                        = (0xffU & (vlSelf->WD >> 8U));
                    __Vdlyvset__data_memory__DOT__ram_array__v5 = 1U;
                    __Vdlyvdim0__data_memory__DOT__ram_array__v5 
                        = (0x1fffcU & vlSelf->A);
                    __Vdlyvval__data_memory__DOT__ram_array__v6 
                        = (0xffU & vlSelf->WD);
                    __Vdlyvdim0__data_memory__DOT__ram_array__v6 
                        = (0x1ffffU & ((IData)(1U) 
                                       + (0x1fffcU 
                                          & vlSelf->A)));
                }
            } else if ((1U & (IData)(vlSelf->modeBU))) {
                __Vdlyvval__data_memory__DOT__ram_array__v7 
                    = (vlSelf->WD >> 0x18U);
                __Vdlyvset__data_memory__DOT__ram_array__v7 = 1U;
                __Vdlyvdim0__data_memory__DOT__ram_array__v7 
                    = (0x1fffcU & vlSelf->A);
                __Vdlyvval__data_memory__DOT__ram_array__v8 
                    = (0xffU & (vlSelf->WD >> 0x10U));
                __Vdlyvdim0__data_memory__DOT__ram_array__v8 
                    = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                                  & vlSelf->A)));
                __Vdlyvval__data_memory__DOT__ram_array__v9 
                    = (0xffU & (vlSelf->WD >> 8U));
                __Vdlyvdim0__data_memory__DOT__ram_array__v9 
                    = (0x1ffffU & ((IData)(2U) + (0x1fffcU 
                                                  & vlSelf->A)));
                __Vdlyvval__data_memory__DOT__ram_array__v10 
                    = (0xffU & vlSelf->WD);
                __Vdlyvdim0__data_memory__DOT__ram_array__v10 
                    = (0x1ffffU & ((IData)(3U) + (0x1fffcU 
                                                  & vlSelf->A)));
            } else {
                __Vdlyvset__data_memory__DOT__ram_array__v11 = 1U;
                __Vdlyvdim0__data_memory__DOT__ram_array__v11 
                    = (0x1fffcU & vlSelf->A);
            }
        }
    }
    if (__Vdlyvset__data_memory__DOT__ram_array__v0) {
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v0] = 0U;
    }
    if (__Vdlyvset__data_memory__DOT__ram_array__v1) {
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v1] 
            = __Vdlyvval__data_memory__DOT__ram_array__v1;
    }
    if (__Vdlyvset__data_memory__DOT__ram_array__v2) {
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v2] 
            = __Vdlyvval__data_memory__DOT__ram_array__v2;
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v3] 
            = __Vdlyvval__data_memory__DOT__ram_array__v3;
    }
    if (__Vdlyvset__data_memory__DOT__ram_array__v4) {
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v4] 
            = __Vdlyvval__data_memory__DOT__ram_array__v4;
    }
    if (__Vdlyvset__data_memory__DOT__ram_array__v5) {
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v5] 
            = __Vdlyvval__data_memory__DOT__ram_array__v5;
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v6] 
            = __Vdlyvval__data_memory__DOT__ram_array__v6;
    }
    if (__Vdlyvset__data_memory__DOT__ram_array__v7) {
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v7] 
            = __Vdlyvval__data_memory__DOT__ram_array__v7;
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v8] 
            = __Vdlyvval__data_memory__DOT__ram_array__v8;
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v9] 
            = __Vdlyvval__data_memory__DOT__ram_array__v9;
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v10] 
            = __Vdlyvval__data_memory__DOT__ram_array__v10;
    }
    if (__Vdlyvset__data_memory__DOT__ram_array__v11) {
        vlSelf->data_memory__DOT__ram_array[__Vdlyvdim0__data_memory__DOT__ram_array__v11] = 0U;
    }
}

VL_INLINE_OPT void Vdata_memory___024root___combo__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___combo__TOP__0\n"); );
    // Body
    if ((0x1ffffU > vlSelf->A)) {
        if ((1U == (IData)(vlSelf->ResultSrc))) {
            if ((4U & (IData)(vlSelf->modeBU))) {
                if ((2U & (IData)(vlSelf->modeBU))) {
                    vlSelf->Result = vlSelf->RD;
                } else if ((1U & (IData)(vlSelf->modeBU))) {
                    vlSelf->RD = vlSelf->data_memory__DOT__ram_array
                        [(0x1fffcU & vlSelf->A)];
                    vlSelf->Result = vlSelf->RD;
                } else {
                    vlSelf->RD = ((vlSelf->data_memory__DOT__ram_array
                                   [(0x1fffcU & vlSelf->A)] 
                                   << 8U) | vlSelf->data_memory__DOT__ram_array
                                  [(0x1ffffU & ((IData)(1U) 
                                                + (0x1fffcU 
                                                   & vlSelf->A)))]);
                    vlSelf->Result = vlSelf->RD;
                }
            } else if ((2U & (IData)(vlSelf->modeBU))) {
                if ((1U & (IData)(vlSelf->modeBU))) {
                    vlSelf->RD = (((- (IData)((1U & 
                                               (vlSelf->data_memory__DOT__ram_array
                                                [(0x1fffcU 
                                                  & vlSelf->A)] 
                                                >> 7U)))) 
                                   << 8U) | vlSelf->data_memory__DOT__ram_array
                                  [(0x1fffcU & vlSelf->A)]);
                    vlSelf->Result = vlSelf->RD;
                } else {
                    vlSelf->RD = (((- (IData)((1U & 
                                               (vlSelf->data_memory__DOT__ram_array
                                                [(0x1fffcU 
                                                  & vlSelf->A)] 
                                                >> 7U)))) 
                                   << 0x10U) | ((vlSelf->data_memory__DOT__ram_array
                                                 [(0x1fffcU 
                                                   & vlSelf->A)] 
                                                 << 8U) 
                                                | vlSelf->data_memory__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1fffcU 
                                                      & vlSelf->A)))]));
                    vlSelf->Result = vlSelf->RD;
                }
            } else if ((1U & (IData)(vlSelf->modeBU))) {
                vlSelf->RD = ((vlSelf->data_memory__DOT__ram_array
                               [(0x1fffcU & vlSelf->A)] 
                               << 0x18U) | ((vlSelf->data_memory__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x1fffcU 
                                                   & vlSelf->A)))] 
                                             << 0x10U) 
                                            | ((vlSelf->data_memory__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x1fffcU 
                                                      & vlSelf->A)))] 
                                                << 8U) 
                                               | vlSelf->data_memory__DOT__ram_array
                                               [(0x1ffffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x1fffcU 
                                                     & vlSelf->A)))])));
                vlSelf->Result = vlSelf->RD;
            } else {
                vlSelf->Result = vlSelf->RD;
            }
        } else if ((0U == (IData)(vlSelf->ResultSrc))) {
            vlSelf->Result = vlSelf->A;
        } else if ((2U == (IData)(vlSelf->ResultSrc))) {
            vlSelf->Result = ((IData)(4U) + vlSelf->A);
        }
        if (VL_UNLIKELY((0x1ffffU <= vlSelf->A))) {
            VL_WRITEF("Out of bounds\n");
            vlSelf->Result = 0U;
        }
    }
}

void Vdata_memory___024root___eval(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdata_memory___024root___sequent__TOP__0(vlSelf);
    }
    Vdata_memory___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vdata_memory___024root___change_request_1(Vdata_memory___024root* vlSelf);

VL_INLINE_OPT QData Vdata_memory___024root___change_request(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___change_request\n"); );
    // Body
    return (Vdata_memory___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdata_memory___024root___change_request_1(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->RD ^ vlSelf->__Vchglast__TOP__RD));
    VL_DEBUG_IF( if(__req && ((vlSelf->RD ^ vlSelf->__Vchglast__TOP__RD))) VL_DBG_MSGF("        CHANGE: data_memory.sv:14: RD\n"); );
    // Final
    vlSelf->__Vchglast__TOP__RD = vlSelf->RD;
    return __req;
}

#ifdef VL_DEBUG
void Vdata_memory___024root___eval_debug_assertions(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->modeBU & 0xf8U))) {
        Verilated::overWidthError("modeBU");}
    if (VL_UNLIKELY((vlSelf->ResultSrc & 0xfcU))) {
        Verilated::overWidthError("ResultSrc");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->WE & 0xfeU))) {
        Verilated::overWidthError("WE");}
}
#endif  // VL_DEBUG
