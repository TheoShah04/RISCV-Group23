// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__rst;
        CData/*0:0*/ top__DOT__RegWriteE;
        CData/*0:0*/ top__DOT__ALUSrcE;
        CData/*0:0*/ top__DOT__MemWriteE;
        CData/*1:0*/ top__DOT__ResultSrcE;
        CData/*2:0*/ top__DOT__modeAddrE;
        CData/*0:0*/ top__DOT__RegWriteM;
        CData/*0:0*/ top__DOT__MemWriteM;
        CData/*1:0*/ top__DOT__ResultSrcM;
        CData/*2:0*/ top__DOT__modeAddrM;
        CData/*0:0*/ top__DOT__RegWriteW;
        CData/*1:0*/ top__DOT__ResultSrcW;
        CData/*2:0*/ top__DOT__ImmSrc;
        CData/*0:0*/ top__DOT__RegWriteD;
        CData/*3:0*/ top__DOT__ALUControlD;
        CData/*3:0*/ top__DOT__ALUControlE;
        CData/*0:0*/ top__DOT__ALUSrcD;
        CData/*1:0*/ top__DOT__ResultSrcD;
        CData/*0:0*/ top__DOT__MemWriteD;
        CData/*2:0*/ top__DOT__modeAddrD;
        CData/*0:0*/ top__DOT__Zero;
        CData/*0:0*/ top__DOT__MemReadD;
        CData/*0:0*/ top__DOT__MemReadE;
        CData/*0:0*/ top__DOT__JumpD;
        CData/*0:0*/ top__DOT__JumpE;
        CData/*0:0*/ top__DOT__BranchD;
        CData/*0:0*/ top__DOT__BranchE;
        CData/*4:0*/ top__DOT__Rs1D;
        CData/*4:0*/ top__DOT__Rs1E;
        CData/*4:0*/ top__DOT__Rs2D;
        CData/*4:0*/ top__DOT__Rs2E;
        CData/*4:0*/ top__DOT__RdD;
        CData/*4:0*/ top__DOT__RdE;
        CData/*4:0*/ top__DOT__RdM;
        CData/*4:0*/ top__DOT__RdW;
        CData/*1:0*/ top__DOT__ForwardAE;
        CData/*1:0*/ top__DOT__ForwardBE;
        CData/*0:0*/ top__DOT__flush;
        CData/*0:0*/ top__DOT__stall;
        CData/*0:0*/ top__DOT__flushBranch;
        CData/*0:0*/ top__DOT__BPU_Src;
        CData/*0:0*/ top__DOT__trigger;
        CData/*4:0*/ top__DOT__hazard_unit__DOT__RdM;
        CData/*4:0*/ top__DOT__hazard_unit__DOT__RdW;
        CData/*4:0*/ top__DOT__hazard_unit__DOT__RdE;
        CData/*4:0*/ top__DOT__hazard_unit__DOT__Rs1E;
        CData/*4:0*/ top__DOT__hazard_unit__DOT__Rs2E;
        CData/*0:0*/ top__DOT__hazard_unit__DOT__RegWriteM;
        CData/*0:0*/ top__DOT__hazard_unit__DOT__RegWriteW;
        CData/*0:0*/ top__DOT__hazard_unit__DOT__MemReadE;
        CData/*0:0*/ top__DOT__hazard_unit__DOT__flushBranch;
        CData/*1:0*/ top__DOT__hazard_unit__DOT__ForwardAE;
        CData/*1:0*/ top__DOT__hazard_unit__DOT__ForwardBE;
        CData/*0:0*/ top__DOT__hazard_unit__DOT__stall;
        CData/*0:0*/ top__DOT__hazard_unit__DOT__flush;
        CData/*0:0*/ top__DOT__branch_prediction_unit__DOT__clk;
        CData/*0:0*/ top__DOT__branch_prediction_unit__DOT__ZeroE;
        CData/*0:0*/ top__DOT__branch_prediction_unit__DOT__BranchE;
        CData/*0:0*/ top__DOT__branch_prediction_unit__DOT__flushBranch;
        CData/*0:0*/ top__DOT__branch_prediction_unit__DOT__PCBPUSrc;
        CData/*1:0*/ top__DOT__branch_prediction_unit__DOT__forwardJumpCounter;
    };
    struct {
        CData/*1:0*/ top__DOT__branch_prediction_unit__DOT__backwardJumpCounter;
        CData/*0:0*/ top__DOT__PC_mux__DOT__ZeroE;
        CData/*0:0*/ top__DOT__PC_mux__DOT__JumpE;
        CData/*0:0*/ top__DOT__PC_mux__DOT__BranchE;
        CData/*0:0*/ top__DOT__BPU_mux__DOT__sel;
        CData/*0:0*/ top__DOT__program_counter__DOT__clk;
        CData/*0:0*/ top__DOT__program_counter__DOT__rst;
        CData/*0:0*/ top__DOT__program_counter__DOT__stall;
        CData/*0:0*/ top__DOT__regfile__DOT__clk;
        CData/*4:0*/ top__DOT__regfile__DOT__AD1;
        CData/*4:0*/ top__DOT__regfile__DOT__AD2;
        CData/*4:0*/ top__DOT__regfile__DOT__AD3;
        CData/*0:0*/ top__DOT__regfile__DOT__WE3;
        CData/*1:0*/ top__DOT__control_unit__DOT__ResultSrcD;
        CData/*0:0*/ top__DOT__control_unit__DOT__MemWriteD;
        CData/*0:0*/ top__DOT__control_unit__DOT__JumpD;
        CData/*0:0*/ top__DOT__control_unit__DOT__BranchD;
        CData/*3:0*/ top__DOT__control_unit__DOT__ALUControlD;
        CData/*0:0*/ top__DOT__control_unit__DOT__ALUSrcD;
        CData/*2:0*/ top__DOT__control_unit__DOT__ImmSrcD;
        CData/*0:0*/ top__DOT__control_unit__DOT__RegWriteD;
        CData/*2:0*/ top__DOT__control_unit__DOT__modeAddr;
        CData/*0:0*/ top__DOT__control_unit__DOT__MemReadD;
        CData/*6:0*/ top__DOT__control_unit__DOT__op;
        CData/*2:0*/ top__DOT__control_unit__DOT__funct3;
        CData/*0:0*/ top__DOT__control_unit__DOT__funct7;
        CData/*1:0*/ top__DOT__control_unit__DOT__ALUOp;
        CData/*0:0*/ top__DOT__control_unit__DOT__Store;
        CData/*0:0*/ top__DOT__control_unit__DOT__Load;
        CData/*1:0*/ top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp;
        CData/*0:0*/ top__DOT__control_unit__DOT__alu_decoder__DOT__op;
        CData/*2:0*/ top__DOT__control_unit__DOT__alu_decoder__DOT__funct3;
        CData/*0:0*/ top__DOT__control_unit__DOT__alu_decoder__DOT__funct7;
        CData/*3:0*/ top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
        CData/*2:0*/ top__DOT__sign_extend__DOT__ImmSrc;
        CData/*1:0*/ top__DOT__forwardAE_mux__DOT__sel;
        CData/*1:0*/ top__DOT__forwardBE_mux__DOT__sel;
        CData/*3:0*/ top__DOT__alu__DOT__ALUctrl;
        CData/*0:0*/ top__DOT__alu__DOT__ZeroE;
        CData/*2:0*/ top__DOT__data_memory__DOT__modeAddr;
        CData/*1:0*/ top__DOT__data_memory__DOT__ResultSrc;
        CData/*0:0*/ top__DOT__data_memory__DOT__clk;
        CData/*0:0*/ top__DOT__data_memory__DOT__trigger;
        CData/*0:0*/ top__DOT__data_memory__DOT__WE;
        CData/*1:0*/ top__DOT__regfile_mux__DOT__sel;
        CData/*0:0*/ top__DOT__pipeline_FD__DOT__clk;
        CData/*0:0*/ top__DOT__pipeline_FD__DOT__flush;
        CData/*0:0*/ top__DOT__pipeline_FD__DOT__stall;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__clk;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__flush;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__MemReadD;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__MemReadE;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__RegWriteD;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__RegWriteE;
        CData/*1:0*/ top__DOT__pipeline_DE__DOT__ResultSrcD;
        CData/*1:0*/ top__DOT__pipeline_DE__DOT__ResultSrcE;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__MemWriteD;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__MemWriteE;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__JumpD;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__JumpE;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__BranchD;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__BranchE;
        CData/*3:0*/ top__DOT__pipeline_DE__DOT__ALUControlD;
        CData/*3:0*/ top__DOT__pipeline_DE__DOT__ALUControlE;
    };
    struct {
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__ALUSrcD;
        CData/*0:0*/ top__DOT__pipeline_DE__DOT__ALUSrcE;
        CData/*4:0*/ top__DOT__pipeline_DE__DOT__Rs1D;
        CData/*4:0*/ top__DOT__pipeline_DE__DOT__Rs1E;
        CData/*4:0*/ top__DOT__pipeline_DE__DOT__Rs2D;
        CData/*4:0*/ top__DOT__pipeline_DE__DOT__Rs2E;
        CData/*4:0*/ top__DOT__pipeline_DE__DOT__RdD;
        CData/*4:0*/ top__DOT__pipeline_DE__DOT__RdE;
        CData/*2:0*/ top__DOT__pipeline_DE__DOT__modeAddrD;
        CData/*2:0*/ top__DOT__pipeline_DE__DOT__modeAddrE;
        CData/*0:0*/ top__DOT__pipeline_EM__DOT__clk;
        CData/*0:0*/ top__DOT__pipeline_EM__DOT__RegWriteE;
        CData/*0:0*/ top__DOT__pipeline_EM__DOT__RegWriteM;
        CData/*1:0*/ top__DOT__pipeline_EM__DOT__ResultSrcE;
        CData/*1:0*/ top__DOT__pipeline_EM__DOT__ResultSrcM;
        CData/*0:0*/ top__DOT__pipeline_EM__DOT__MemWriteE;
        CData/*0:0*/ top__DOT__pipeline_EM__DOT__MemWriteM;
        CData/*4:0*/ top__DOT__pipeline_EM__DOT__RdE;
        CData/*4:0*/ top__DOT__pipeline_EM__DOT__RdM;
        CData/*2:0*/ top__DOT__pipeline_EM__DOT__modeAddrE;
        CData/*2:0*/ top__DOT__pipeline_EM__DOT__modeAddrM;
        CData/*0:0*/ top__DOT__pipeline_MW__DOT__clk;
        CData/*0:0*/ top__DOT__pipeline_MW__DOT__RegWriteM;
        CData/*0:0*/ top__DOT__pipeline_MW__DOT__RegWriteW;
        CData/*1:0*/ top__DOT__pipeline_MW__DOT__ResultSrcM;
        CData/*1:0*/ top__DOT__pipeline_MW__DOT__ResultSrcW;
        CData/*4:0*/ top__DOT__pipeline_MW__DOT__RdM;
        CData/*4:0*/ top__DOT__pipeline_MW__DOT__RdW;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(a0,31,0);
        VL_OUT(a1,31,0);
        VL_OUT(a2,31,0);
        VL_OUT(a3,31,0);
        VL_OUT(a4,31,0);
        VL_OUT(a5,31,0);
        VL_OUT(a6,31,0);
        VL_OUT(a7,31,0);
        VL_OUT(t0,31,0);
        VL_OUT(t1,31,0);
        VL_OUT(t2,31,0);
        VL_OUT(t3,31,0);
        VL_OUT(t4,31,0);
        VL_OUT(t5,31,0);
        VL_OUT(t6,31,0);
        VL_OUT(s0,31,0);
        VL_OUT(s1,31,0);
        VL_OUT(s2,31,0);
        VL_OUT(s3,31,0);
        VL_OUT(s4,31,0);
        VL_OUT(s5,31,0);
        VL_OUT(s6,31,0);
        VL_OUT(s7,31,0);
        VL_OUT(s8,31,0);
        VL_OUT(s9,31,0);
        VL_OUT(s10,31,0);
        VL_OUT(s11,31,0);
        IData/*31:0*/ top__DOT__a0;
        IData/*31:0*/ top__DOT__a1;
        IData/*31:0*/ top__DOT__a2;
        IData/*31:0*/ top__DOT__a3;
        IData/*31:0*/ top__DOT__a4;
    };
    struct {
        IData/*31:0*/ top__DOT__a5;
        IData/*31:0*/ top__DOT__a6;
        IData/*31:0*/ top__DOT__a7;
        IData/*31:0*/ top__DOT__t0;
        IData/*31:0*/ top__DOT__t1;
        IData/*31:0*/ top__DOT__t2;
        IData/*31:0*/ top__DOT__t3;
        IData/*31:0*/ top__DOT__t4;
        IData/*31:0*/ top__DOT__t5;
        IData/*31:0*/ top__DOT__t6;
        IData/*31:0*/ top__DOT__s0;
        IData/*31:0*/ top__DOT__s1;
        IData/*31:0*/ top__DOT__s2;
        IData/*31:0*/ top__DOT__s3;
        IData/*31:0*/ top__DOT__s4;
        IData/*31:0*/ top__DOT__s5;
        IData/*31:0*/ top__DOT__s6;
        IData/*31:0*/ top__DOT__s7;
        IData/*31:0*/ top__DOT__s8;
        IData/*31:0*/ top__DOT__s9;
        IData/*31:0*/ top__DOT__s10;
        IData/*31:0*/ top__DOT__s11;
        IData/*31:0*/ top__DOT__InstrD;
        IData/*31:0*/ top__DOT__InstrF;
        IData/*31:0*/ top__DOT__InstrE;
        IData/*31:0*/ top__DOT__InstrM;
        IData/*31:0*/ top__DOT__InstrW;
        IData/*31:0*/ top__DOT__RD1E;
        IData/*31:0*/ top__DOT__RD2E;
        IData/*31:0*/ top__DOT__PCE;
        IData/*31:0*/ top__DOT__PCPlus4E;
        IData/*31:0*/ top__DOT__ReadDataW;
        IData/*31:0*/ top__DOT__ReadDataM;
        IData/*31:0*/ top__DOT__PCPlus4W;
        IData/*31:0*/ top__DOT__ExtImmD;
        IData/*31:0*/ top__DOT__ExtImmE;
        IData/*31:0*/ top__DOT__WriteDataE;
        IData/*31:0*/ top__DOT__WriteDataM;
        IData/*31:0*/ top__DOT__ALUResultM;
        IData/*31:0*/ top__DOT__ALUResultE;
        IData/*31:0*/ top__DOT__ALUResultW;
        IData/*31:0*/ top__DOT__PC;
        IData/*31:0*/ top__DOT__PCF;
        IData/*31:0*/ top__DOT__PCPlus4F;
        IData/*31:0*/ top__DOT__PCPlus4D;
        IData/*31:0*/ top__DOT__PCPlus4M;
        IData/*31:0*/ top__DOT__PCD;
        IData/*31:0*/ top__DOT__RD1;
        IData/*31:0*/ top__DOT__RD2;
        IData/*31:0*/ top__DOT__RD;
        IData/*31:0*/ top__DOT__ResultW;
        IData/*31:0*/ top__DOT__SrcAE;
        IData/*31:0*/ top__DOT__PC_predict;
        IData/*31:0*/ top__DOT__PC_next;
        IData/*31:0*/ top__DOT__branch_prediction_unit__DOT__RD;
        IData/*31:0*/ top__DOT__branch_prediction_unit__DOT__PCF;
        IData/*31:0*/ top__DOT__branch_prediction_unit__DOT__PCBPU;
        IData/*31:0*/ top__DOT__PC_mux__DOT__PCPlus4F;
        IData/*31:0*/ top__DOT__PC_mux__DOT__ALUResult;
        IData/*31:0*/ top__DOT__PC_mux__DOT__PCTarget;
        IData/*31:0*/ top__DOT__PC_mux__DOT__PC;
        IData/*31:0*/ top__DOT__BPU_mux__DOT__in0;
        IData/*31:0*/ top__DOT__BPU_mux__DOT__in1;
        IData/*31:0*/ top__DOT__BPU_mux__DOT__out;
    };
    struct {
        IData/*31:0*/ top__DOT__program_counter__DOT__PC;
        IData/*31:0*/ top__DOT__program_counter__DOT__PCF;
        IData/*31:0*/ top__DOT__instruction_memory__DOT__PC;
        IData/*31:0*/ top__DOT__instruction_memory__DOT__instr;
        IData/*31:0*/ top__DOT__regfile__DOT__WD3;
        IData/*31:0*/ top__DOT__regfile__DOT__RD1;
        IData/*31:0*/ top__DOT__regfile__DOT__RD2;
        IData/*31:0*/ top__DOT__regfile__DOT__a0;
        IData/*31:0*/ top__DOT__regfile__DOT__a1;
        IData/*31:0*/ top__DOT__regfile__DOT__a2;
        IData/*31:0*/ top__DOT__regfile__DOT__a3;
        IData/*31:0*/ top__DOT__regfile__DOT__a4;
        IData/*31:0*/ top__DOT__regfile__DOT__a5;
        IData/*31:0*/ top__DOT__regfile__DOT__a6;
        IData/*31:0*/ top__DOT__regfile__DOT__a7;
        IData/*31:0*/ top__DOT__regfile__DOT__t0;
        IData/*31:0*/ top__DOT__regfile__DOT__t1;
        IData/*31:0*/ top__DOT__regfile__DOT__t2;
        IData/*31:0*/ top__DOT__regfile__DOT__t3;
        IData/*31:0*/ top__DOT__regfile__DOT__t4;
        IData/*31:0*/ top__DOT__regfile__DOT__t5;
        IData/*31:0*/ top__DOT__regfile__DOT__t6;
        IData/*31:0*/ top__DOT__regfile__DOT__s0;
        IData/*31:0*/ top__DOT__regfile__DOT__s1;
        IData/*31:0*/ top__DOT__regfile__DOT__s2;
        IData/*31:0*/ top__DOT__regfile__DOT__s3;
        IData/*31:0*/ top__DOT__regfile__DOT__s4;
        IData/*31:0*/ top__DOT__regfile__DOT__s5;
        IData/*31:0*/ top__DOT__regfile__DOT__s6;
        IData/*31:0*/ top__DOT__regfile__DOT__s7;
        IData/*31:0*/ top__DOT__regfile__DOT__s8;
        IData/*31:0*/ top__DOT__regfile__DOT__s9;
        IData/*31:0*/ top__DOT__regfile__DOT__s10;
        IData/*31:0*/ top__DOT__regfile__DOT__s11;
        IData/*31:0*/ top__DOT__control_unit__DOT__InstrD;
        IData/*31:0*/ top__DOT__sign_extend__DOT__ImmInput;
        IData/*31:0*/ top__DOT__sign_extend__DOT__ImmExt;
        IData/*31:0*/ top__DOT__forwardAE_mux__DOT__in0;
        IData/*31:0*/ top__DOT__forwardAE_mux__DOT__in1;
        IData/*31:0*/ top__DOT__forwardAE_mux__DOT__in2;
        IData/*31:0*/ top__DOT__forwardAE_mux__DOT__out;
        IData/*31:0*/ top__DOT__forwardBE_mux__DOT__in0;
        IData/*31:0*/ top__DOT__forwardBE_mux__DOT__in1;
        IData/*31:0*/ top__DOT__forwardBE_mux__DOT__in2;
        IData/*31:0*/ top__DOT__forwardBE_mux__DOT__out;
        IData/*31:0*/ top__DOT__alu__DOT__SrcA;
        IData/*31:0*/ top__DOT__alu__DOT__SrcB;
        IData/*31:0*/ top__DOT__alu__DOT__ALUResult;
        IData/*31:0*/ top__DOT__data_memory__DOT__A;
        IData/*31:0*/ top__DOT__data_memory__DOT__WD;
        IData/*31:0*/ top__DOT__data_memory__DOT__RD;
        IData/*31:0*/ top__DOT__regfile_mux__DOT__in0;
        IData/*31:0*/ top__DOT__regfile_mux__DOT__in1;
        IData/*31:0*/ top__DOT__regfile_mux__DOT__in2;
        IData/*31:0*/ top__DOT__regfile_mux__DOT__out;
        IData/*31:0*/ top__DOT__pipeline_FD__DOT__RD;
        IData/*31:0*/ top__DOT__pipeline_FD__DOT__InstrD;
        IData/*31:0*/ top__DOT__pipeline_FD__DOT__PCF;
        IData/*31:0*/ top__DOT__pipeline_FD__DOT__PCD;
        IData/*31:0*/ top__DOT__pipeline_FD__DOT__PCPlus4F;
        IData/*31:0*/ top__DOT__pipeline_FD__DOT__PCPlus4D;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__RD1;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__RD1E;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__RD2;
    };
    struct {
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__RD2E;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__PCD;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__PCE;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__ExtImmD;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__ExtImmE;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__PCPlus4D;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__PCPlus4E;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__InstrD;
        IData/*31:0*/ top__DOT__pipeline_DE__DOT__InstrE;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__ALUResultE;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__ALUResultM;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__WriteDataE;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__WriteDataM;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__PCPlus4E;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__PCPlus4M;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__InstrE;
        IData/*31:0*/ top__DOT__pipeline_EM__DOT__InstrM;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__ALUResultM;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__ALUResultW;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__ReadDataM;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__ReadDataW;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__PCPlus4M;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__PCPlus4W;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__InstrM;
        IData/*31:0*/ top__DOT__pipeline_MW__DOT__InstrW;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*65:0*/ top__DOT__branch_prediction_unit__DOT__newBranch;
        VlWide<3>/*65:0*/ top__DOT__branch_prediction_unit__DOT__oldBranch;
        VlUnpacked<CData/*7:0*/, 65536> top__DOT__instruction_memory__DOT__rom_array;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__registerfile_array;
        VlUnpacked<CData/*7:0*/, 131072> top__DOT__data_memory__DOT__ram_array;
    };
    VlQueue<VlWide<3>/*65:0*/> top__DOT__branch_prediction_unit__DOT__branch_queue;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__hazard_unit__DOT__WIDTH = 5U;
    static constexpr IData/*31:0*/ top__DOT__branch_prediction_unit__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__PC_mux__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__BPU_mux__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__program_counter__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__instruction_memory__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__regfile__DOT__ADDRESS_WIDTH = 5U;
    static constexpr IData/*31:0*/ top__DOT__regfile__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__control_unit__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__sign_extend__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__forwardAE_mux__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__forwardBE_mux__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__alu__DOT__CONTROL_WIDTH = 4U;
    static constexpr IData/*31:0*/ top__DOT__alu__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__data_memory__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__regfile_mux__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__pipeline_FD__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__pipeline_DE__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__pipeline_DE__DOT__WIDTH = 5U;
    static constexpr IData/*31:0*/ top__DOT__pipeline_EM__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__pipeline_EM__DOT__WIDTH = 5U;
    static constexpr IData/*31:0*/ top__DOT__pipeline_MW__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__pipeline_MW__DOT__WIDTH = 5U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
