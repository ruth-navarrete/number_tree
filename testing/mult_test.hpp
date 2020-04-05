#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/mult.hpp"
#include "../header/Mocks.hpp"

TEST(MultTest, OpOp) {
    NegOneOpMock* op1 = new NegOneOpMock();
    GreaterDecimalOpMock* op2 = new GreaterDecimalOpMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -0.000123);
    EXPECT_EQ(test->stringify(), "-1.000000*0.000123");
}

TEST(MultTest, OpRand) {
    ZeroOpMock* op1 = new ZeroOpMock();
    SevenRandMock* op2 = new SevenRandMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.0);
    EXPECT_EQ(test->stringify(), "0.000000*7.500000");
}

TEST(MultTest, OpAdd) {
    NegOneOpMock* op1 = new NegOneOpMock();
    EighteenAddMock* op2 = new EighteenAddMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -18.250025);
    EXPECT_EQ(test->stringify(), "-1.000000*0.000000+18.250025");
}

TEST(MultTest, OpMult) {
    NegEightyNineOpMock* op1 = new NegEightyNineOpMock();
    SevenThreeMultMock* op2 = new SevenThreeMultMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -2076.225);
    EXPECT_EQ(test->stringify(), "-89.300000*7.500000*3.100000");
}

TEST(MultTest, OpDiv) {
    ZeroOpMock* op1 = new ZeroOpMock();
    HalfDivMock* op2 = new HalfDivMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.0);
    EXPECT_EQ(test->stringify(), "0.000000*1.000000/2.000000");
}

TEST(MultTest, OpPow) {
    SevenOpMock* op1 = new SevenOpMock();
    TwoPowMock* op2 = new TwoPowMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 7.5);
    EXPECT_EQ(test->stringify(), "7.500000*1.000000**2.000000");
}

TEST(MultTest, MultMult) {
    FiveFourMultMock* op1 = new FiveFourMultMock();
    SevenThreeMultMock* op2 = new SevenThreeMultMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 564.975);
    EXPECT_EQ(test->stringify(), "5.400000*4.500000*7.500000*3.100000");
}

TEST(MultTest, MultDiv) {
    ZeroMultMock* op1 = new ZeroMultMock();
    HalfDivMock* op2 = new HalfDivMock();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.0);
    EXPECT_EQ(test->stringify(), "0.000000*1.000000*1.000000/2.000000");
}

#endif // __MULT_TEST_HPP__
