#ifndef __TRUNCATE_TEST_HPP__
#define __TRUNCATE_TEST_HPP__

#include "../header/Truncate.hpp"

TEST(TruncateTest, TruncateEvaluateNonZero) {
    Base* five = new Op(5);
    Base* seven = new Op(7);
    Base* mySub = new Sub(seven,five);
    Base* test = new Truncate(mySub);
    EXPECT_EQ(test->stringify(), "2.000000");
}

TEST(TruncateTest2, TruncateEvaluateNonZero) {
    Base* left = new Op(5);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* right = new Sub(seven,four);
    Base* myAdd = new Add(left, right);
    Base* test = new Truncate(myAdd);
    EXPECT_EQ(test->stringify(), "8.000000");
}

#endif



