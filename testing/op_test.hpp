#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8.0);
}

TEST(OpTest, OpStringifyNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8.000000");
}

TEST(OpTest, OpNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8.0);
    EXPECT_EQ(test->stringify(), "8.000000");
}

TEST(OpTest, OpZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0.0);
    EXPECT_EQ(test->stringify(), "0.000000");
}

TEST(OpTest, OpNeg) {
    Op* test = new Op(-12.345);
    EXPECT_EQ(test->evaluate(), -12.345);
    EXPECT_EQ(test->stringify(), "-12.345000");
}

#endif //__OP_TEST_HPP__
