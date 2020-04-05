#ifndef __TEMP_FACTORY_TEST_HPP__
#define __TEMP_FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/base.hpp"
#include "../header/op.hpp"
#include "../header/rand.hpp"
#include "../header/add.hpp"
#include "../header/subtract.hpp"
#include "../header/mult.hpp"
#include "../header/divide.hpp"
#include "../header/pow.hpp"
#include "../header/factory.hpp"

TEST(TempFactoryTest, FactoryTest) {
    int length  = 5;

    std::string three = "3", two = "2", six = "6", plus = "+", times = "*";

    char* input[length + 1];
    input[0] = (char*)three.c_str();
    input[1] = (char*)plus.c_str();
    input[2] = (char*)two.c_str();
    input[3] = (char*)times.c_str();
    input[4] = (char*)six.c_str();
    input[5] = NULL;

    Factory* factory = new Factory();
    Base* b = factory->parse(input, length);

    EXPECT_EQ(b->evaluate(), 30);
    EXPECT_EQ(b->stringify(), "3.000000+2.000000*6.000000");
}

TEST(TempFactoryTest, FactoryTestLong) {
    int length  = 8;

    std::string three = "3", two = "2", six = "6", four = "4", five = "5", plus = "+", times = "*", minus = "-", divide = "/";

    char* input[length + 1];

    input[0] = (char*)three.c_str();
    input[1] = (char*)plus.c_str();
    input[2] = (char*)five.c_str();
    input[3] = (char*)divide.c_str();
    input[4] = (char*)two.c_str();
    input[5] = (char*)times.c_str();
    input[6] = (char*)six.c_str();
    input[7] = (char*)minus.c_str();
    input[8] = (char*)four.c_str();
    input[9] = NULL;

    Factory* factory3 = new Factory();
    Base* b3 = factory3->parse(input, length);

    EXPECT_EQ(b3->evaluate(), 20);
    EXPECT_EQ(b3->stringify(), "3.000000+5.000000/2.000000*6.000000-4.000000");
}

TEST(TempFactoryTest, FactoryTestInvalid) {
    int length  = 3;

    std::string a = "a", b = "b", plus = "+";

    char* input[length + 1];
    input[0] = (char*)a.c_str();
    input[1] = (char*)plus.c_str();
    input[2] = (char*)b.c_str();
    input[3] = NULL;
 
    Factory* factory2 = new Factory();
    Base* b2 = factory2->parse(input, length);

    EXPECT_EQ(b2, nullptr);
}

#endif
