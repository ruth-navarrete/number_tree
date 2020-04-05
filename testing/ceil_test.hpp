#ifndef __CEIL_TEST_HPP__
#define __CEIL_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/ceil.hpp"

TEST(CeilTest, Op) {
    Base* op1 = new Op(7.2);
    Base* test = new Ceil(op1);
    EXPECT_EQ(test->evaluate(),  8);
}

TEST(CeilTest, Mult) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* mult = new Mult(op1, op2);
    Base* test = new Ceil(mult);
    EXPECT_EQ(test->evaluate(), 16);
}

TEST(CeilTest, Div) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* div = new Div(op1, op2);
    Base* test = new Ceil(div);
    EXPECT_EQ(test->evaluate(), 4);
}

TEST(CeilTest, Add_DivMult) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* div = new Div(op1, op2);

    Base* op3 = new Op(5);
    Base* op4 = new Op(1);
    Base* mult = new Mult(op3, op4);

    Base* add = new Add(div, mult);

    Base* test = new Ceil(add);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(CeilTest, Sub_OpDiv) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* div = new Div(op1, op2);

    Base* op3 = new Op(5);

    Base* sub = new Sub(div, op3);

    Base* test = new Ceil(sub);
    EXPECT_EQ(test->evaluate(), -1);
}

#endif // __CEIL_TEST_HPP__
