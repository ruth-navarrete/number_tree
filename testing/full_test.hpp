#ifndef __FULL_TEST_HPP__
#define __FULL_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/vector_container.hpp"
#include "../header/bubble_sort.hpp"
#include "../header/SelectionSort.hpp"
#include "../header/ListContainer.hpp"
#include "../header/base.hpp"
#include "../header/op.hpp"
#include "../header/rand.hpp"
#include "../header/add.hpp"
#include "../header/subtract.hpp"
#include "../header/mult.hpp"
#include "../header/divide.hpp"
#include "../header/pow.hpp"
#include "../header/abs.hpp"
#include "../header/floor.hpp"
#include "../header/ceil.hpp"
#include "../header/Truncate.hpp"
#include "../header/Paren.hpp"
#include "../header/Decorator.hpp"
#include "../header/factory.hpp"

TEST(FullTestSet, FullTest1) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* treeA = new Mult(seven, four);
    Base* tree1 = new Ceil(treeA);

    Base* six = new Op(6);
    Base* two = new Op(2);
    Base* treeB = new Div(six, two);
    Base* tree2 = new Ceil(treeB);
    

    int length = 3;
    char* input[length + 1];

    std::string plus = "+";
    int test11 = tree1->evaluate();
    int test22 = tree2->evaluate();
    std::string test1 = std::to_string(test11);
    std::string test2 = std::to_string(test22);

    input[0] = (char*)test1.c_str();
    input[1] = (char*)plus.c_str(); 
    input[2] = (char*)test2.c_str();
    input[3] = NULL;
    
    Factory* myFactory = new Factory();
    Base* myBase = myFactory->parse(input, length);

    EXPECT_EQ(myBase->evaluate(), 31);
    EXPECT_EQ(myBase->stringify(), "28.000000+3.000000");

}

TEST(FullTestSet, FullTest2) {
    Base* twelve = new Op(12);
    Base* eight = new Op(8);
    Base* treeC = new Sub(twelve, eight);
    Base* tree3 = new Floor(treeC);

    Base* nOne = new Op(-1);
    Base* nine = new Op(9);
    Base* treeD = new Add(nine, nOne);
    Base* tree4 = new Floor(treeD);

    Base* nTwo = new Op(-2);
    Base* treeE = new Add(nTwo, tree3);
    Base* tree5 = new Ceil(treeE);
    

    int length2 = 5;
    char* input2[length2 + 1];

    std::string plus = "+";
    std::string minus = "-";
    int test33 = tree3->evaluate();
    int test44 = tree4->evaluate();
    int test55 = tree5->evaluate();
    std::string test3 = std::to_string(test33);
    std::string test4 = std::to_string(test44);
    std::string test5 = std::to_string(test55);

//    std::cout<< test3 << std::endl;
//    std::cout<< test4 << std::endl;
//    std::cout<< test5 << std::endl;
   
    input2[0] = (char*)test3.c_str();
    input2[1] = (char*)plus.c_str(); 
    input2[2] = (char*)test4.c_str();
    input2[3] = (char*)minus.c_str();
    input2[4] = (char*)test5.c_str();
    input2[5] = NULL;    

    Factory* myFactory2 = new Factory();
    Base* myBase2 = myFactory2->parse(input2, length2);

    EXPECT_EQ(myBase2->evaluate(), 10);
    EXPECT_EQ(myBase2->stringify(), "4.000000+8.000000-2.000000");
    
}

#endif
