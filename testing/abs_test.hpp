#ifndef __ABS_TEST_HPP__
#define __ABS_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/abs.hpp"

TEST(AbsTest, Op) {
    Base* op1 = new Op(-7.2);
    Base* test = new Abs(op1);
    EXPECT_EQ(test->evaluate(),  7.2);
}

TEST(AbsTest, Mult) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(-2);
    Base* mult = new Mult(op1, op2);
    Base* test = new Abs(mult);
    EXPECT_EQ(test->evaluate(), 14.4);
}

TEST(AbsTest, Div) {
    Base* op1 = new Op(-7.2);
    Base* op2 = new Op(2);
    Base* div = new Div(op1, op2);
    Base* test = new Abs(div);
    EXPECT_EQ(test->evaluate(), 3.6);
}

TEST(AbsTest, Add_DivMult) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(-2);
    Base* div = new Div(op1, op2);

    Base* op3 = new Op(5);
    Base* op4 = new Op(-1);
    Base* mult = new Mult(op3, op4);

    Base* add = new Add(div, mult);

    Base* test = new Abs(add);
    EXPECT_EQ(test->evaluate(), 8.6);
}

TEST(AbsTest, Sub_OpDiv) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(-2);
    Base* div = new Div(op1, op2);

    Base* op3 = new Op(5);

    Base* sub = new Sub(div, op3);

    Base* test = new Abs(sub);
    EXPECT_EQ(test->evaluate(), 8.6);
}

#endif // __ABS_TEST_HPP__
