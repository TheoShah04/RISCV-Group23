#include "gtest/gtest.h"
#include "VcontrolUnit.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class controlUnitTest : public ::testing::Test
{
public:

protected:
    VcontrolUnit* dut; 

    virtual void SetUp() override {
        dut = new VcontrolUnit;
    }

    virtual void TearDown() override {
        delete dut;
    }
    
    void clockTick() {
        dut->clk = 1;
        evaluate();
        dut->clk = 0;
        evaluate();
    }

    void evaluate() {
        dut->eval(); 
    }
};

 TEST_F(controlUnitTest, R-type) {
    dut->Instr = 0x00;   
    evaluate();
    clockTick();
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b00); 
    EXPECT_EQ(dut->ResultSrc, 0x000000020); 
    EXPECT_EQ(dut->MemWrite, 0x000000020); 
    EXPECT_EQ(dut->ALUControl, 0x000000020); 
    EXPECT_EQ(dut->ALUSrc, 0x000000020); 
    EXPECT_EQ(dut->ImmSrc, 0x000000020); 
    EXPECT_EQ(dut->RegWrite, 0x000000020); 
    EXPECT_EQ(dut->modeBU, 0x000000020); 
} 

TEST_F(data_memoryTest, WriteEnableIsOneAndResultSrcIsOne) {
    dut->ResultSrc = 1;   
    dut->A = 0x000000;
    dut->WE = 1;
    dut->WD = 0x0002;
    dut->modeBU = 1;
    evaluate();
    clockTick();
    evaluate();
    EXPECT_EQ(dut->Result, 0x0002); 
}

TEST_F(data_memoryTest, WriteEnableIsOneAndResultSrcIsOneAndModeBUIsFour) {
    dut->ResultSrc = 1;   
    dut->A = 0x000040;
    dut->WE = 1;
    dut->WD = 0x0004;
    dut->modeBU = 4;
    evaluate();
    clockTick();
    evaluate();
    EXPECT_EQ(dut->Result, 0x0004); 
}

TEST_F(data_memoryTest, WriteEnableIsOneAndResultSrcIsOneAndModeBUIsThree) {
    dut->ResultSrc = 1;   
    dut->A = 0x000050;
    dut->WE = 1;
    dut->WD = 0x00FF;
    dut->modeBU = 3;
    evaluate();
    clockTick();
    evaluate();
    EXPECT_EQ(dut->Result, 0xFFFFFFFF); 
}

TEST_F(data_memoryTest, WriteEnableIsOneAndResultSrcIsOneAndModeBUIsFive) {
    dut->ResultSrc = 1;   
    dut->A = 0x000000;
    dut->WE = 1;
    dut->WD = 0x0004;
    dut->modeBU = 5;
    evaluate();
    clockTick();
    evaluate();
    EXPECT_EQ(dut->Result, 0x0004); 
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}