#ifndef __DIVIDE_TEST_HPP__
#define __DIVIDE_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/divide.hpp"

TEST(DivTest, DivEvaluateNonZero) {
    Op *left = new Op(6);
    Op *right = new Op (3);
    Div* test = new Div(left,right);
    EXPECT_EQ(test->evaluate(), 2);
    }

TEST(DivTest, DivEvaluateNonZeroStr) {
    Op *left = new Op(6);
    Op *right = new Op (3);
    Div* test = new Div(left,right);
    EXPECT_EQ(test->stringify(), "6.000000/3.000000");
}

#endif
