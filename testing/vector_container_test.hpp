#ifndef __VECTOR_CONTAINER_TEST_HPP__
#define __VECTOR_CONTAINER_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/vector_container.cpp"
#include "../header/base.hpp"
#include "../header/op.hpp"
#include "../header/rand.hpp"
#include "../header/add.hpp"
#include "../header/subtract.hpp"
#include "../header/mult.hpp"
#include "../header/divide.hpp"
#include "../header/pow.hpp"

TEST(VectorContainerTestSet, TestSet) {
    // Set up elements under test
    Base* seven = new Op(7);
    Base* three = new Op(3);
    Base* mult = new Mult(seven, three);
    Base* five = new Op(5);
    Base* two = new Op(2);
    Base* add = new Add(two, five);
    Base* four = new Op(4);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of the test element
    test_container->add_element(mult);
    test_container->add_element(four);
    test_container->add_element(add);

    // Assert that the container has at least one single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 3);

    // test add_element() and at();
    EXPECT_EQ(test_container->at(0), mult);
    EXPECT_EQ(test_container->at(1), four);
    EXPECT_EQ(test_container->at(2), add);

    // test print()
    std::cout << "print() test: " << std::endl;
    test_container->print();

    // test swap()
    test_container->swap(0, 2);

    // test evaluate() and at()
    EXPECT_EQ(test_container->at(1)->evaluate(), 4);

    // test at()
    EXPECT_EQ(test_container->at(0), add);

    // test size()
    EXPECT_EQ(test_container->size(), 3);

    // test invalid sort()
    std::cout << "invalid sort() test" << std::endl;
    test_container->sort();
}

#endif // __VECTOR_CONTAINER_TEST_HPP__
