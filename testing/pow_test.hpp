#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/pow.hpp"
#include "../header/Mocks.hpp"

TEST(PowTest, OpOp) {
    NegOneOpMock* op1 = new NegOneOpMock();
    Pow* test = new Pow(op1, op1);
    EXPECT_EQ(test->evaluate(), -1.0);
    EXPECT_EQ(test->stringify(), "-1.000000**-1.000000");
}

TEST(PowTest, OpRand) {
    ZeroOpMock* op1 = new ZeroOpMock();
    SevenRandMock* op2 = new SevenRandMock();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.0);
    EXPECT_EQ(test->stringify(), "0.000000**7.500000");
}

TEST(PowTest, OpAdd) {
    OneOpMock* op1 = new OneOpMock();
    ZeroAddMock* op2 = new ZeroAddMock();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 1.0);
    EXPECT_EQ(test->stringify(), "1.150000**0.000000+0.000000");
}

TEST(PowTest, OpMult) {
    SevenOpMock* op1 = new SevenOpMock();
    ZeroMultMock* op2 = new ZeroMultMock();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 1.0);
    EXPECT_EQ(test->stringify(), "7.500000**0.000000*1.000000");
}

TEST(PowTest, OpDiv) {
    ZeroOpMock* op1 = new ZeroOpMock();
    HalfDivMock* op2 = new HalfDivMock();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.0);
    EXPECT_EQ(test->stringify(), "0.000000**1.000000/2.000000");
}

TEST(PowTest, PowOp) {
    TwoPowMock* op1 = new TwoPowMock();
    SevenOpMock* op2 = new SevenOpMock();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 1.0);
    EXPECT_EQ(test->stringify(), "1.000000**2.000000**7.500000");
}

TEST(PowTest, MultDiv) {
    ZeroMultMock* op1 = new ZeroMultMock();
    HalfDivMock* op2 = new HalfDivMock();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "0.000000*1.000000**1.000000/2.000000");
}

#endif // __POW_TEST_HPP__
