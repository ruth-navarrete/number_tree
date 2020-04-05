#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/rand.hpp"

TEST(RandTest, RandRand) {
    srand(1);
    Rand* test1 = new Rand();
    EXPECT_EQ(test1->evaluate(), 83.0);
    EXPECT_EQ(test1->stringify(), "83.000000");
    Rand* test2 = new Rand();
    EXPECT_EQ(test2->evaluate(), 86.0);
    EXPECT_EQ(test2->stringify(), "86.000000");
}

#endif //  __RAND_TEST_HPP__
