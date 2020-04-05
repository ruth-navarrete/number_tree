#ifndef __PAREN_TEST_HPP__
#define __PAREN_TEST_HPP__

#include "../header/Paren.hpp"

TEST(ParenTest, ParenTest) {
    Base* five = new Op(5);
    Base* seven = new Op(7);
    Base* myAdd = new Add(five, seven);
    Base* test = new Paren(myAdd);
    EXPECT_EQ(test->stringify(), "(5.000000+7.000000)");
}


TEST(ParenTest2, ParenTest) {
    Base* left = new Op(5);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* right = new Sub(seven,four);
    Base* myAdd = new Add(left, right);
    Base* test = new Paren(myAdd);
    EXPECT_EQ(test->stringify(), "(5.000000+7.000000-4.000000)");
}

#endif
