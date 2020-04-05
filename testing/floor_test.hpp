#ifndef __FLOOR_TEST_HPP__
#define __FLOOR_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/floor.hpp"

TEST(FloorTest, Op) {
    Base* op1 = new Op(7.2);
    Base* test = new Floor(op1);
    EXPECT_EQ(test->evaluate(), 7);
}

TEST(FloorTest, Mult) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* mult = new Mult(op1, op2);
    Base* test = new Floor(mult);
    EXPECT_EQ(test->evaluate(), 15);
}

TEST(FloorTest, Div) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* div = new Div(op1, op2);
    Base* test = new Floor(div);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(FloorTest, Add_DivMult) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* div = new Div(op1, op2);

    Base* op3 = new Op(5);
    Base* op4 = new Op(1);
    Base* mult = new Mult(op3, op4);

    Base* add = new Add(div, mult);

    Base* test = new Floor(add);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(FLoorTest, Sub_OpDiv) {
    Base* op1 = new Op(7.2);
    Base* op2 = new Op(2.1);
    Base* div = new Div(op1, op2);

    Base* op3 = new Op(5);

    Base* sub = new Sub(div, op3);

    Base* test = new Floor(sub);
    EXPECT_EQ(test->evaluate(), -2);
}

#endif // __FLOOR_TEST_HPP__
