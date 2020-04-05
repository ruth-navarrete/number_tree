#ifndef __LISTCONTAINER_TEST_HPP__
#define __LISTCONTAINER_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/ListContainer.hpp"
#include "../header/base.hpp"
#include "../header/op.hpp"
#include "../header/rand.hpp"
#include "../header/add.hpp"
#include "../header/subtract.hpp"
#include "../header/mult.hpp"
#include "../header/divide.hpp"
#include "../header/pow.hpp"

TEST(ListContainerTestSet, TestSet) {
	Base* two = new Op(2);
	Base* six = new Op(6);
	Base* myMult = new Mult(two, six);
	Base* myAdd = new Add(two, six);
	ListContainer* myList = new ListContainer();

	myList->add_element(two);
	myList->add_element(myMult);
	myList->add_element(myAdd);

	ASSERT_EQ(myList->size(), 3);
	
	myList->print();

	myList->swap(0,2);

	EXPECT_EQ(myList->at(1)->evaluate(), 12);

	EXPECT_EQ(myList->at(0), myAdd);

	EXPECT_EQ(myList->size(), 3);
}
#endif
