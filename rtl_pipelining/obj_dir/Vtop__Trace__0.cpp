// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.trigger));
    bufp->chgIData(oldp+3,(vlSelfRef.a0),32);
    bufp->chgIData(oldp+4,(vlSelfRef.a1),32);
    bufp->chgIData(oldp+5,(vlSelfRef.a2),32);
    bufp->chgIData(oldp+6,(vlSelfRef.a3),32);
    bufp->chgIData(oldp+7,(vlSelfRef.a4),32);
    bufp->chgIData(oldp+8,(vlSelfRef.a5),32);
    bufp->chgIData(oldp+9,(vlSelfRef.a6),32);
    bufp->chgIData(oldp+10,(vlSelfRef.a7),32);
    bufp->chgIData(oldp+11,(vlSelfRef.t0),32);
    bufp->chgIData(oldp+12,(vlSelfRef.t1),32);
    bufp->chgIData(oldp+13,(vlSelfRef.t2),32);
    bufp->chgIData(oldp+14,(vlSelfRef.t3),32);
    bufp->chgIData(oldp+15,(vlSelfRef.t4),32);
    bufp->chgIData(oldp+16,(vlSelfRef.t5),32);
    bufp->chgIData(oldp+17,(vlSelfRef.t6),32);
    bufp->chgIData(oldp+18,(vlSelfRef.s0),32);
    bufp->chgIData(oldp+19,(vlSelfRef.s1),32);
    bufp->chgIData(oldp+20,(vlSelfRef.s2),32);
    bufp->chgIData(oldp+21,(vlSelfRef.s3),32);
    bufp->chgIData(oldp+22,(vlSelfRef.s4),32);
    bufp->chgIData(oldp+23,(vlSelfRef.s5),32);
    bufp->chgIData(oldp+24,(vlSelfRef.s6),32);
    bufp->chgIData(oldp+25,(vlSelfRef.s7),32);
    bufp->chgIData(oldp+26,(vlSelfRef.s8),32);
    bufp->chgIData(oldp+27,(vlSelfRef.s9),32);
    bufp->chgIData(oldp+28,(vlSelfRef.s10),32);
    bufp->chgIData(oldp+29,(vlSelfRef.s11),32);
    bufp->chgBit(oldp+30,(vlSelfRef.top__DOT__clk));
    bufp->chgBit(oldp+31,(vlSelfRef.top__DOT__rst));
    bufp->chgBit(oldp+32,(vlSelfRef.top__DOT__trigger));
    bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__a0),32);
    bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__a1),32);
    bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__a2),32);
    bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__a3),32);
    bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__a4),32);
    bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__a5),32);
    bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__a6),32);
    bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__a7),32);
    bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__t0),32);
    bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__t1),32);
    bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__t2),32);
    bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__t3),32);
    bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__t4),32);
    bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__t5),32);
    bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__t6),32);
    bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__s0),32);
    bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__s1),32);
    bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__s2),32);
    bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__s3),32);
    bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__s4),32);
    bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__s5),32);
    bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__s6),32);
    bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__s7),32);
    bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__s8),32);
    bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__s9),32);
    bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__s10),32);
    bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__s11),32);
    bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__InstrD),32);
    bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__InstrF),32);
    bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__InstrE),32);
    bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__InstrM),32);
    bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__InstrW),32);
    bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__RD1E),32);
    bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__RD2E),32);
    bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__PCE),32);
    bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__PCPlus4E),32);
    bufp->chgBit(oldp+69,(vlSelfRef.top__DOT__RegWriteE));
    bufp->chgBit(oldp+70,(vlSelfRef.top__DOT__ALUSrcE));
    bufp->chgBit(oldp+71,(vlSelfRef.top__DOT__MemWriteE));
    bufp->chgCData(oldp+72,(vlSelfRef.top__DOT__ResultSrcE),2);
    bufp->chgCData(oldp+73,(vlSelfRef.top__DOT__modeAddrE),3);
    bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__JALRE));
    bufp->chgBit(oldp+75,(vlSelfRef.top__DOT__RegWriteM));
    bufp->chgBit(oldp+76,(vlSelfRef.top__DOT__MemWriteM));
    bufp->chgCData(oldp+77,(vlSelfRef.top__DOT__ResultSrcM),2);
    bufp->chgCData(oldp+78,(vlSelfRef.top__DOT__modeAddrM),3);
    bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__ReadDataW),32);
    bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__ReadDataM),32);
    bufp->chgBit(oldp+81,(vlSelfRef.top__DOT__RegWriteW));
    bufp->chgCData(oldp+82,(vlSelfRef.top__DOT__ResultSrcW),2);
    bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__PCPlus4W),32);
    bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__ExtImmD),32);
    bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__ExtImmE),32);
    bufp->chgCData(oldp+86,(vlSelfRef.top__DOT__ImmSrc),3);
    bufp->chgBit(oldp+87,(vlSelfRef.top__DOT__RegWriteD));
    bufp->chgCData(oldp+88,(vlSelfRef.top__DOT__ALUControlD),4);
    bufp->chgCData(oldp+89,(vlSelfRef.top__DOT__ALUControlE),4);
    bufp->chgBit(oldp+90,(vlSelfRef.top__DOT__ALUSrcD));
    bufp->chgCData(oldp+91,(vlSelfRef.top__DOT__ResultSrcD),2);
    bufp->chgBit(oldp+92,(vlSelfRef.top__DOT__MemWriteD));
    bufp->chgCData(oldp+93,(vlSelfRef.top__DOT__modeAddrD),3);
    bufp->chgBit(oldp+94,(vlSelfRef.top__DOT__Zero));
    bufp->chgBit(oldp+95,(vlSelfRef.top__DOT__MemReadD));
    bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__MemReadE));
    bufp->chgBit(oldp+97,(vlSelfRef.top__DOT__MemReadM));
    bufp->chgBit(oldp+98,(vlSelfRef.top__DOT__JumpD));
    bufp->chgBit(oldp+99,(vlSelfRef.top__DOT__JumpE));
    bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__BranchD));
    bufp->chgBit(oldp+101,(vlSelfRef.top__DOT__BranchE));
    bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__JALRD));
    bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__WriteDataE),32);
    bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__WriteDataM),32);
    bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__ALUResultM),32);
    bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__ALUResultE),32);
    bufp->chgIData(oldp+107,(vlSelfRef.top__DOT__ALUResultW),32);
    bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__PC),32);
    bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__PCF),32);
    bufp->chgIData(oldp+110,(vlSelfRef.top__DOT__PCPlus4F),32);
    bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__PCPlus4D),32);
    bufp->chgIData(oldp+112,(vlSelfRef.top__DOT__PCPlus4M),32);
    bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__PCD),32);
    bufp->chgCData(oldp+114,(vlSelfRef.top__DOT__Rs1D),5);
    bufp->chgCData(oldp+115,(vlSelfRef.top__DOT__Rs1E),5);
    bufp->chgCData(oldp+116,(vlSelfRef.top__DOT__Rs2D),5);
    bufp->chgCData(oldp+117,(vlSelfRef.top__DOT__Rs2E),5);
    bufp->chgCData(oldp+118,(vlSelfRef.top__DOT__RdD),5);
    bufp->chgCData(oldp+119,(vlSelfRef.top__DOT__RdE),5);
    bufp->chgCData(oldp+120,(vlSelfRef.top__DOT__RdM),5);
    bufp->chgCData(oldp+121,(vlSelfRef.top__DOT__RdW),5);
    bufp->chgIData(oldp+122,(vlSelfRef.top__DOT__RD1),32);
    bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__RD2),32);
    bufp->chgIData(oldp+124,(vlSelfRef.top__DOT__RD),32);
    bufp->chgIData(oldp+125,(vlSelfRef.top__DOT__ResultW),32);
    bufp->chgIData(oldp+126,(vlSelfRef.top__DOT__SrcAE),32);
    bufp->chgCData(oldp+127,(vlSelfRef.top__DOT__ForwardAE),2);
    bufp->chgCData(oldp+128,(vlSelfRef.top__DOT__ForwardBE),2);
    bufp->chgBit(oldp+129,(vlSelfRef.top__DOT__flush));
    bufp->chgBit(oldp+130,(vlSelfRef.top__DOT__flushDE));
    bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__stall));
    bufp->chgBit(oldp+132,(vlSelfRef.top__DOT__miss_stall));
    bufp->chgBit(oldp+133,(vlSelfRef.top__DOT__flushBranch));
    bufp->chgBit(oldp+134,(vlSelfRef.top__DOT__BPU_Src));
    bufp->chgIData(oldp+135,(vlSelfRef.top__DOT__PC_predict),32);
    bufp->chgIData(oldp+136,(vlSelfRef.top__DOT__PC_next),32);
    bufp->chgBit(oldp+137,(vlSelfRef.top__DOT__BPU_mux__DOT__sel));
    bufp->chgIData(oldp+138,(vlSelfRef.top__DOT__BPU_mux__DOT__in0),32);
    bufp->chgIData(oldp+139,(vlSelfRef.top__DOT__BPU_mux__DOT__in1),32);
    bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__BPU_mux__DOT__out),32);
    bufp->chgBit(oldp+141,(vlSelfRef.top__DOT__PC_mux__DOT__ZeroE));
    bufp->chgBit(oldp+142,(vlSelfRef.top__DOT__PC_mux__DOT__JumpE));
    bufp->chgBit(oldp+143,(vlSelfRef.top__DOT__PC_mux__DOT__BranchE));
    bufp->chgBit(oldp+144,(vlSelfRef.top__DOT__PC_mux__DOT__JALRE));
    bufp->chgIData(oldp+145,(vlSelfRef.top__DOT__PC_mux__DOT__PCPlus4F),32);
    bufp->chgIData(oldp+146,(vlSelfRef.top__DOT__PC_mux__DOT__ALUResult),32);
    bufp->chgIData(oldp+147,(vlSelfRef.top__DOT__PC_mux__DOT__PCTarget),32);
    bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__PC_mux__DOT__PC),32);
    bufp->chgIData(oldp+149,(vlSelfRef.top__DOT__alu__DOT__SrcA),32);
    bufp->chgIData(oldp+150,(vlSelfRef.top__DOT__alu__DOT__SrcB),32);
    bufp->chgCData(oldp+151,(vlSelfRef.top__DOT__alu__DOT__ALUctrl),4);
    bufp->chgIData(oldp+152,(vlSelfRef.top__DOT__alu__DOT__ALUResult),32);
    bufp->chgBit(oldp+153,(vlSelfRef.top__DOT__alu__DOT__ZeroE));
    bufp->chgBit(oldp+154,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__clk));
    bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__RD),32);
    bufp->chgIData(oldp+156,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCF),32);
    bufp->chgBit(oldp+157,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__ZeroE));
    bufp->chgBit(oldp+158,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__JumpE));
    bufp->chgBit(oldp+159,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__BranchE));
    bufp->chgBit(oldp+160,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch));
    bufp->chgIData(oldp+161,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU),32);
    bufp->chgBit(oldp+162,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc));
    bufp->chgWData(oldp+163,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch),66);
    bufp->chgWData(oldp+166,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch),66);
    bufp->chgBit(oldp+169,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpDecisionCorrect));
    bufp->chgBit(oldp+170,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpDecisionCorrect));
    bufp->chgCData(oldp+171,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter),2);
    bufp->chgCData(oldp+172,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter),2);
    bufp->chgBit(oldp+173,(vlSelfRef.top__DOT__cached_data_memory__DOT__clk));
    bufp->chgBit(oldp+174,(vlSelfRef.top__DOT__cached_data_memory__DOT__rst));
    bufp->chgBit(oldp+175,(vlSelfRef.top__DOT__cached_data_memory__DOT__WE));
    bufp->chgBit(oldp+176,(vlSelfRef.top__DOT__cached_data_memory__DOT__RE));
    bufp->chgCData(oldp+177,(vlSelfRef.top__DOT__cached_data_memory__DOT__modeAddr),3);
    bufp->chgIData(oldp+178,(vlSelfRef.top__DOT__cached_data_memory__DOT__addr),32);
    bufp->chgIData(oldp+179,(vlSelfRef.top__DOT__cached_data_memory__DOT__write_data),32);
    bufp->chgBit(oldp+180,(vlSelfRef.top__DOT__cached_data_memory__DOT__trigger));
    bufp->chgBit(oldp+181,(vlSelfRef.top__DOT__cached_data_memory__DOT__miss_stall));
    bufp->chgIData(oldp+182,(vlSelfRef.top__DOT__cached_data_memory__DOT__data_out),32);
    bufp->chgIData(oldp+183,(vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache),32);
    bufp->chgBit(oldp+184,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__clk));
    bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__rst));
    bufp->chgCData(oldp+186,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__modeAddr),3);
    bufp->chgIData(oldp+187,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__addr),32);
    bufp->chgIData(oldp+188,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__write_data),32);
    bufp->chgBit(oldp+189,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__WE));
    bufp->chgBit(oldp+190,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__RE));
    bufp->chgBit(oldp+191,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__trigger));
    bufp->chgBit(oldp+192,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall));
    bufp->chgIData(oldp+193,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out),32);
    bufp->chgCData(oldp+194,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set),8);
    bufp->chgIData(oldp+195,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__read_data),32);
    bufp->chgBit(oldp+196,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0));
    bufp->chgBit(oldp+197,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1));
    bufp->chgBit(oldp+198,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__replace_bit));
    bufp->chgIData(oldp+199,(vlSelfRef.top__DOT__control_unit__DOT__InstrD),32);
    bufp->chgCData(oldp+200,(vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD),2);
    bufp->chgBit(oldp+201,(vlSelfRef.top__DOT__control_unit__DOT__MemWriteD));
    bufp->chgBit(oldp+202,(vlSelfRef.top__DOT__control_unit__DOT__JumpD));
    bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__control_unit__DOT__BranchD));
    bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__control_unit__DOT__JALRD));
    bufp->chgCData(oldp+205,(vlSelfRef.top__DOT__control_unit__DOT__ALUControlD),4);
    bufp->chgBit(oldp+206,(vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD));
    bufp->chgCData(oldp+207,(vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD),3);
    bufp->chgBit(oldp+208,(vlSelfRef.top__DOT__control_unit__DOT__RegWriteD));
    bufp->chgCData(oldp+209,(vlSelfRef.top__DOT__control_unit__DOT__modeAddr),3);
    bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__control_unit__DOT__MemReadD));
    bufp->chgCData(oldp+211,(vlSelfRef.top__DOT__control_unit__DOT__op),7);
    bufp->chgCData(oldp+212,(vlSelfRef.top__DOT__control_unit__DOT__funct3),3);
    bufp->chgBit(oldp+213,(vlSelfRef.top__DOT__control_unit__DOT__funct7));
    bufp->chgCData(oldp+214,(vlSelfRef.top__DOT__control_unit__DOT__ALUOp),2);
    bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__control_unit__DOT__Store));
    bufp->chgBit(oldp+216,(vlSelfRef.top__DOT__control_unit__DOT__Load));
    bufp->chgCData(oldp+217,(vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp),2);
    bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__op));
    bufp->chgCData(oldp+219,(vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct3),3);
    bufp->chgBit(oldp+220,(vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct7));
    bufp->chgCData(oldp+221,(vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl),4);
    bufp->chgCData(oldp+222,(vlSelfRef.top__DOT__forwardAE_mux__DOT__sel),2);
    bufp->chgIData(oldp+223,(vlSelfRef.top__DOT__forwardAE_mux__DOT__in0),32);
    bufp->chgIData(oldp+224,(vlSelfRef.top__DOT__forwardAE_mux__DOT__in1),32);
    bufp->chgIData(oldp+225,(vlSelfRef.top__DOT__forwardAE_mux__DOT__in2),32);
    bufp->chgIData(oldp+226,(vlSelfRef.top__DOT__forwardAE_mux__DOT__in3),32);
    bufp->chgIData(oldp+227,(vlSelfRef.top__DOT__forwardAE_mux__DOT__out),32);
    bufp->chgCData(oldp+228,(vlSelfRef.top__DOT__forwardBE_mux__DOT__sel),2);
    bufp->chgIData(oldp+229,(vlSelfRef.top__DOT__forwardBE_mux__DOT__in0),32);
    bufp->chgIData(oldp+230,(vlSelfRef.top__DOT__forwardBE_mux__DOT__in1),32);
    bufp->chgIData(oldp+231,(vlSelfRef.top__DOT__forwardBE_mux__DOT__in2),32);
    bufp->chgIData(oldp+232,(vlSelfRef.top__DOT__forwardBE_mux__DOT__in3),32);
    bufp->chgIData(oldp+233,(vlSelfRef.top__DOT__forwardBE_mux__DOT__out),32);
    bufp->chgCData(oldp+234,(vlSelfRef.top__DOT__hazard_unit__DOT__RdM),5);
    bufp->chgCData(oldp+235,(vlSelfRef.top__DOT__hazard_unit__DOT__RdW),5);
    bufp->chgCData(oldp+236,(vlSelfRef.top__DOT__hazard_unit__DOT__RdE),5);
    bufp->chgCData(oldp+237,(vlSelfRef.top__DOT__hazard_unit__DOT__Rs1E),5);
    bufp->chgCData(oldp+238,(vlSelfRef.top__DOT__hazard_unit__DOT__Rs2E),5);
    bufp->chgCData(oldp+239,(vlSelfRef.top__DOT__hazard_unit__DOT__Rs1D),5);
    bufp->chgCData(oldp+240,(vlSelfRef.top__DOT__hazard_unit__DOT__Rs2D),5);
    bufp->chgBit(oldp+241,(vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteM));
    bufp->chgBit(oldp+242,(vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteW));
    bufp->chgBit(oldp+243,(vlSelfRef.top__DOT__hazard_unit__DOT__MemReadE));
    bufp->chgBit(oldp+244,(vlSelfRef.top__DOT__hazard_unit__DOT__JumpE));
    bufp->chgBit(oldp+245,(vlSelfRef.top__DOT__hazard_unit__DOT__MemReadM));
    bufp->chgBit(oldp+246,(vlSelfRef.top__DOT__hazard_unit__DOT__flushBranch));
    bufp->chgBit(oldp+247,(vlSelfRef.top__DOT__hazard_unit__DOT__miss_stall));
    bufp->chgCData(oldp+248,(vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE),2);
    bufp->chgCData(oldp+249,(vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE),2);
    bufp->chgBit(oldp+250,(vlSelfRef.top__DOT__hazard_unit__DOT__stall));
    bufp->chgBit(oldp+251,(vlSelfRef.top__DOT__hazard_unit__DOT__flush));
    bufp->chgBit(oldp+252,(vlSelfRef.top__DOT__hazard_unit__DOT__flushDE));
    bufp->chgIData(oldp+253,(vlSelfRef.top__DOT__instruction_memory__DOT__PC),32);
    bufp->chgIData(oldp+254,(vlSelfRef.top__DOT__instruction_memory__DOT__instr),32);
    bufp->chgBit(oldp+255,(vlSelfRef.top__DOT__pipeline_DE__DOT__clk));
    bufp->chgBit(oldp+256,(vlSelfRef.top__DOT__pipeline_DE__DOT__flushBranch));
    bufp->chgBit(oldp+257,(vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadD));
    bufp->chgBit(oldp+258,(vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE));
    bufp->chgBit(oldp+259,(vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteD));
    bufp->chgBit(oldp+260,(vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE));
    bufp->chgCData(oldp+261,(vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcD),2);
    bufp->chgCData(oldp+262,(vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE),2);
    bufp->chgBit(oldp+263,(vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteD));
    bufp->chgBit(oldp+264,(vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE));
    bufp->chgBit(oldp+265,(vlSelfRef.top__DOT__pipeline_DE__DOT__JumpD));
    bufp->chgBit(oldp+266,(vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE));
    bufp->chgBit(oldp+267,(vlSelfRef.top__DOT__pipeline_DE__DOT__BranchD));
    bufp->chgBit(oldp+268,(vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE));
    bufp->chgBit(oldp+269,(vlSelfRef.top__DOT__pipeline_DE__DOT__JALRD));
    bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__pipeline_DE__DOT__JALRE));
    bufp->chgCData(oldp+271,(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlD),4);
    bufp->chgCData(oldp+272,(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE),4);
    bufp->chgBit(oldp+273,(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcD));
    bufp->chgBit(oldp+274,(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE));
    bufp->chgIData(oldp+275,(vlSelfRef.top__DOT__pipeline_DE__DOT__RD1),32);
    bufp->chgIData(oldp+276,(vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E),32);
    bufp->chgIData(oldp+277,(vlSelfRef.top__DOT__pipeline_DE__DOT__RD2),32);
    bufp->chgIData(oldp+278,(vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E),32);
    bufp->chgIData(oldp+279,(vlSelfRef.top__DOT__pipeline_DE__DOT__PCD),32);
    bufp->chgIData(oldp+280,(vlSelfRef.top__DOT__pipeline_DE__DOT__PCE),32);
    bufp->chgCData(oldp+281,(vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1D),5);
    bufp->chgCData(oldp+282,(vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E),5);
    bufp->chgCData(oldp+283,(vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2D),5);
    bufp->chgCData(oldp+284,(vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E),5);
    bufp->chgCData(oldp+285,(vlSelfRef.top__DOT__pipeline_DE__DOT__RdD),5);
    bufp->chgCData(oldp+286,(vlSelfRef.top__DOT__pipeline_DE__DOT__RdE),5);
    bufp->chgIData(oldp+287,(vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmD),32);
    bufp->chgIData(oldp+288,(vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE),32);
    bufp->chgIData(oldp+289,(vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4D),32);
    bufp->chgIData(oldp+290,(vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E),32);
    bufp->chgCData(oldp+291,(vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrD),3);
    bufp->chgCData(oldp+292,(vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE),3);
    bufp->chgIData(oldp+293,(vlSelfRef.top__DOT__pipeline_DE__DOT__InstrD),32);
    bufp->chgIData(oldp+294,(vlSelfRef.top__DOT__pipeline_DE__DOT__InstrE),32);
    bufp->chgBit(oldp+295,(vlSelfRef.top__DOT__pipeline_EM__DOT__clk));
    bufp->chgBit(oldp+296,(vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteE));
    bufp->chgBit(oldp+297,(vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteM));
    bufp->chgCData(oldp+298,(vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcE),2);
    bufp->chgCData(oldp+299,(vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM),2);
    bufp->chgBit(oldp+300,(vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteE));
    bufp->chgBit(oldp+301,(vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteM));
    bufp->chgIData(oldp+302,(vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultE),32);
    bufp->chgIData(oldp+303,(vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM),32);
    bufp->chgIData(oldp+304,(vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataE),32);
    bufp->chgIData(oldp+305,(vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataM),32);
    bufp->chgCData(oldp+306,(vlSelfRef.top__DOT__pipeline_EM__DOT__RdE),5);
    bufp->chgCData(oldp+307,(vlSelfRef.top__DOT__pipeline_EM__DOT__RdM),5);
    bufp->chgIData(oldp+308,(vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4E),32);
    bufp->chgIData(oldp+309,(vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M),32);
    bufp->chgCData(oldp+310,(vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrE),3);
    bufp->chgCData(oldp+311,(vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrM),3);
    bufp->chgBit(oldp+312,(vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadE));
    bufp->chgBit(oldp+313,(vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadM));
    bufp->chgIData(oldp+314,(vlSelfRef.top__DOT__pipeline_EM__DOT__InstrE),32);
    bufp->chgIData(oldp+315,(vlSelfRef.top__DOT__pipeline_EM__DOT__InstrM),32);
    bufp->chgBit(oldp+316,(vlSelfRef.top__DOT__pipeline_FD__DOT__clk));
    bufp->chgBit(oldp+317,(vlSelfRef.top__DOT__pipeline_FD__DOT__flush));
    bufp->chgBit(oldp+318,(vlSelfRef.top__DOT__pipeline_FD__DOT__stall));
    bufp->chgIData(oldp+319,(vlSelfRef.top__DOT__pipeline_FD__DOT__RD),32);
    bufp->chgIData(oldp+320,(vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD),32);
    bufp->chgIData(oldp+321,(vlSelfRef.top__DOT__pipeline_FD__DOT__PCF),32);
    bufp->chgIData(oldp+322,(vlSelfRef.top__DOT__pipeline_FD__DOT__PCD),32);
    bufp->chgIData(oldp+323,(vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4F),32);
    bufp->chgIData(oldp+324,(vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D),32);
    bufp->chgBit(oldp+325,(vlSelfRef.top__DOT__pipeline_MW__DOT__clk));
    bufp->chgBit(oldp+326,(vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteM));
    bufp->chgBit(oldp+327,(vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteW));
    bufp->chgCData(oldp+328,(vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcM),2);
    bufp->chgCData(oldp+329,(vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcW),2);
    bufp->chgIData(oldp+330,(vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultM),32);
    bufp->chgIData(oldp+331,(vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultW),32);
    bufp->chgIData(oldp+332,(vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataM),32);
    bufp->chgIData(oldp+333,(vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataW),32);
    bufp->chgCData(oldp+334,(vlSelfRef.top__DOT__pipeline_MW__DOT__RdM),5);
    bufp->chgCData(oldp+335,(vlSelfRef.top__DOT__pipeline_MW__DOT__RdW),5);
    bufp->chgIData(oldp+336,(vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4M),32);
    bufp->chgIData(oldp+337,(vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4W),32);
    bufp->chgIData(oldp+338,(vlSelfRef.top__DOT__pipeline_MW__DOT__InstrM),32);
    bufp->chgIData(oldp+339,(vlSelfRef.top__DOT__pipeline_MW__DOT__InstrW),32);
    bufp->chgBit(oldp+340,(vlSelfRef.top__DOT__program_counter__DOT__clk));
    bufp->chgBit(oldp+341,(vlSelfRef.top__DOT__program_counter__DOT__rst));
    bufp->chgIData(oldp+342,(vlSelfRef.top__DOT__program_counter__DOT__PC),32);
    bufp->chgBit(oldp+343,(vlSelfRef.top__DOT__program_counter__DOT__stall));
    bufp->chgIData(oldp+344,(vlSelfRef.top__DOT__program_counter__DOT__PCF),32);
    bufp->chgBit(oldp+345,(vlSelfRef.top__DOT__regfile__DOT__clk));
    bufp->chgCData(oldp+346,(vlSelfRef.top__DOT__regfile__DOT__AD1),5);
    bufp->chgCData(oldp+347,(vlSelfRef.top__DOT__regfile__DOT__AD2),5);
    bufp->chgCData(oldp+348,(vlSelfRef.top__DOT__regfile__DOT__AD3),5);
    bufp->chgBit(oldp+349,(vlSelfRef.top__DOT__regfile__DOT__WE3));
    bufp->chgIData(oldp+350,(vlSelfRef.top__DOT__regfile__DOT__WD3),32);
    bufp->chgIData(oldp+351,(vlSelfRef.top__DOT__regfile__DOT__RD1),32);
    bufp->chgIData(oldp+352,(vlSelfRef.top__DOT__regfile__DOT__RD2),32);
    bufp->chgIData(oldp+353,(vlSelfRef.top__DOT__regfile__DOT__a0),32);
    bufp->chgIData(oldp+354,(vlSelfRef.top__DOT__regfile__DOT__a1),32);
    bufp->chgIData(oldp+355,(vlSelfRef.top__DOT__regfile__DOT__a2),32);
    bufp->chgIData(oldp+356,(vlSelfRef.top__DOT__regfile__DOT__a3),32);
    bufp->chgIData(oldp+357,(vlSelfRef.top__DOT__regfile__DOT__a4),32);
    bufp->chgIData(oldp+358,(vlSelfRef.top__DOT__regfile__DOT__a5),32);
    bufp->chgIData(oldp+359,(vlSelfRef.top__DOT__regfile__DOT__a6),32);
    bufp->chgIData(oldp+360,(vlSelfRef.top__DOT__regfile__DOT__a7),32);
    bufp->chgIData(oldp+361,(vlSelfRef.top__DOT__regfile__DOT__t0),32);
    bufp->chgIData(oldp+362,(vlSelfRef.top__DOT__regfile__DOT__t1),32);
    bufp->chgIData(oldp+363,(vlSelfRef.top__DOT__regfile__DOT__t2),32);
    bufp->chgIData(oldp+364,(vlSelfRef.top__DOT__regfile__DOT__t3),32);
    bufp->chgIData(oldp+365,(vlSelfRef.top__DOT__regfile__DOT__t4),32);
    bufp->chgIData(oldp+366,(vlSelfRef.top__DOT__regfile__DOT__t5),32);
    bufp->chgIData(oldp+367,(vlSelfRef.top__DOT__regfile__DOT__t6),32);
    bufp->chgIData(oldp+368,(vlSelfRef.top__DOT__regfile__DOT__s0),32);
    bufp->chgIData(oldp+369,(vlSelfRef.top__DOT__regfile__DOT__s1),32);
    bufp->chgIData(oldp+370,(vlSelfRef.top__DOT__regfile__DOT__s2),32);
    bufp->chgIData(oldp+371,(vlSelfRef.top__DOT__regfile__DOT__s3),32);
    bufp->chgIData(oldp+372,(vlSelfRef.top__DOT__regfile__DOT__s4),32);
    bufp->chgIData(oldp+373,(vlSelfRef.top__DOT__regfile__DOT__s5),32);
    bufp->chgIData(oldp+374,(vlSelfRef.top__DOT__regfile__DOT__s6),32);
    bufp->chgIData(oldp+375,(vlSelfRef.top__DOT__regfile__DOT__s7),32);
    bufp->chgIData(oldp+376,(vlSelfRef.top__DOT__regfile__DOT__s8),32);
    bufp->chgIData(oldp+377,(vlSelfRef.top__DOT__regfile__DOT__s9),32);
    bufp->chgIData(oldp+378,(vlSelfRef.top__DOT__regfile__DOT__s10),32);
    bufp->chgIData(oldp+379,(vlSelfRef.top__DOT__regfile__DOT__s11),32);
    bufp->chgIData(oldp+380,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[0]),32);
    bufp->chgIData(oldp+381,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[1]),32);
    bufp->chgIData(oldp+382,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[2]),32);
    bufp->chgIData(oldp+383,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[3]),32);
    bufp->chgIData(oldp+384,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[4]),32);
    bufp->chgIData(oldp+385,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[5]),32);
    bufp->chgIData(oldp+386,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[6]),32);
    bufp->chgIData(oldp+387,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[7]),32);
    bufp->chgIData(oldp+388,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[8]),32);
    bufp->chgIData(oldp+389,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[9]),32);
    bufp->chgIData(oldp+390,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[10]),32);
    bufp->chgIData(oldp+391,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[11]),32);
    bufp->chgIData(oldp+392,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[12]),32);
    bufp->chgIData(oldp+393,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[13]),32);
    bufp->chgIData(oldp+394,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[14]),32);
    bufp->chgIData(oldp+395,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[15]),32);
    bufp->chgIData(oldp+396,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[16]),32);
    bufp->chgIData(oldp+397,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[17]),32);
    bufp->chgIData(oldp+398,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[18]),32);
    bufp->chgIData(oldp+399,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[19]),32);
    bufp->chgIData(oldp+400,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[20]),32);
    bufp->chgIData(oldp+401,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[21]),32);
    bufp->chgIData(oldp+402,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[22]),32);
    bufp->chgIData(oldp+403,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[23]),32);
    bufp->chgIData(oldp+404,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[24]),32);
    bufp->chgIData(oldp+405,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[25]),32);
    bufp->chgIData(oldp+406,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[26]),32);
    bufp->chgIData(oldp+407,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[27]),32);
    bufp->chgIData(oldp+408,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[28]),32);
    bufp->chgIData(oldp+409,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[29]),32);
    bufp->chgIData(oldp+410,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[30]),32);
    bufp->chgIData(oldp+411,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[31]),32);
    bufp->chgCData(oldp+412,(vlSelfRef.top__DOT__regfile_mux__DOT__sel),2);
    bufp->chgIData(oldp+413,(vlSelfRef.top__DOT__regfile_mux__DOT__in0),32);
    bufp->chgIData(oldp+414,(vlSelfRef.top__DOT__regfile_mux__DOT__in1),32);
    bufp->chgIData(oldp+415,(vlSelfRef.top__DOT__regfile_mux__DOT__in2),32);
    bufp->chgIData(oldp+416,(vlSelfRef.top__DOT__regfile_mux__DOT__out),32);
    bufp->chgCData(oldp+417,(vlSelfRef.top__DOT__sign_extend__DOT__ImmSrc),3);
    bufp->chgIData(oldp+418,(vlSelfRef.top__DOT__sign_extend__DOT__ImmInput),32);
    bufp->chgIData(oldp+419,(vlSelfRef.top__DOT__sign_extend__DOT__ImmExt),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
