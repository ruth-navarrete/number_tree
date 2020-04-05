#include "gtest/gtest.h"

#include "../header/add.hpp"
//#include "main.cpp"

TEST(AddTest, AddEvaluateNonZero) {
    Op *left = new Op(2);
    Op *right = new Op (3);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->evaluate(), 5);
}

TEST(AddTest, AddEvaluateNonZeroStr) {
    Op *left = new Op(2);
    Op *right = new Op (3);
    Add* test = new Add(left,right);
   EXPECT_EQ(test->stringify(), "2.000000+3.000000");
}



