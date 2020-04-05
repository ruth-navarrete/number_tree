#include "gtest/gtest.h"

#include "../header/subtract.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Op *left = new Op(3);
    Op *right = new Op (2);
    Sub* test = new Sub(left,right);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(SubTest, SubEvaluateNonZeroStr) {
    Op *left = new Op(3);
    Op *right = new Op (2);
    Sub* test = new Sub(left,right);
    EXPECT_EQ(test->stringify(), "3.000000-2.000000");
}
