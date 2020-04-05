#ifndef __SELECTION_SORT_TEST_HPP__
#define __SELECTION_SORT_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/SelectionSort.cpp"
#include "../header/vector_container.cpp"
#include "../header/base.hpp"
#include "../header/op.hpp"
#include "../header/rand.hpp"
#include "../header/add.hpp"
#include "../header/subtract.hpp"
#include "../header/mult.hpp"
#include "../header/divide.hpp"
#include "../header/pow.hpp"

TEST(SortTestSet, TestSet) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* treeA = new Mult(seven, four);
    
    Base* three = new Op(3);
    Base* two = new Op(2);
    Base* treeB = new Add(three, two);
    
    Base* twelve = new Op(12);
    Base* eight = new Op(8);
    Base* treeC = new Sub(twelve, eight);
    
    std::cout << "add_element()" << std::endl;
    VectorContainer* container = new VectorContainer();
    container->add_element(treeA);
    container->add_element(treeB);
    container->add_element(treeC);
    
    std::cout << "print(): ";
    container->print();
    
    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);
    
    std::cout << "sort()" << std::endl;
    container->set_sort_function(new SelectionSort());
    container->sort();
    
    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
    
    std::cout << "print(): ";
    container->print();
}


#endif
