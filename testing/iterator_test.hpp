#ifndef __ITERATOR_TEST_HPP__
#define __ITERATOR_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/base.hpp"
#include "../header/op.hpp"
#include "../header/rand.hpp"
#include "../header/add.hpp"
#include "../header/subtract.hpp"
#include "../header/mult.hpp"
#include "../header/divide.hpp"
#include "../header/pow.hpp"
#include "../header/Decorator.hpp"
#include "../header/ListContainer.hpp"
#include "../header/Paren.hpp"
#include "../header/SelectionSort.hpp"
#include "../header/Truncate.hpp"
#include "../header/abs.hpp"
#include "../header/bubble_sort.hpp"
#include "../header/ceil.hpp"
#include "../header/container.hpp"
#include "../header/floor.hpp"
#include "../header/sort.hpp"
#include "../header/vector_container.hpp"
#include "../iterator.hpp"
#include "../testing/Dummy.hpp"

TEST(ItTest, ItTestOp){
    Base* op1 = new Op(1);
    Iterator* it = op1->create_iterator();
    EXPECT_EQ(it->test_it(), "null iterator");
}

TEST(ItTest, ItTestRand){
    Base* op1 = new Rand();
    Iterator* it = op1->create_iterator();
    EXPECT_EQ(it->test_it(), "null iterator");
}

TEST(ItTest, ItTestAdd){
    Base* op = new Add(new Op(3), new Op(4));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "binary iterator");
}

TEST(ItTest, ItTestSub){
    Base* op = new Sub(new Op(3), new Op(4));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "binary iterator");
}

TEST(ItTest, ItTestMult){
    Base* op = new Mult(new Op(3), new Op(4));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "binary iterator");
}

TEST(ItTest, ItTestDiv){
    Base* op = new Div(new Op(3), new Op(4));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "binary iterator");
}

TEST(ItTest, ItTestPow){
    Base* op = new Pow(new Op(3), new Op(4));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "binary iterator");
}

TEST(ItTest, ItTestAbs){
    Base* op = new Abs(new Mult(new Op(3), new Op(4)));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "unary iterator");
}

TEST(ItTest, ItTestCeil){
    Base* op = new Ceil(new Mult(new Op(3), new Op(4)));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "unary iterator");
}

TEST(ItTest, ItTestFloor){
    Base* op = new Floor(new Mult(new Op(3), new Op(4)));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "unary iterator");
}

TEST(ItTest, ItTestParen){
    Base* op = new Paren(new Mult(new Op(3), new Op(4)));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "unary iterator");
}

TEST(ItTest, ItTestTrunc){
    Base* op = new Truncate(new Mult(new Op(3), new Op(4)));
    Iterator* it = op->create_iterator();
    EXPECT_EQ(it->test_it(), "unary iterator");
}

/* TEST(ItTest, DivTest) {
   Base* left = new Op(3);
   Base* right = new Op(4);
   Base* test = new Div(left, right);
   Dummy* dummy = new Dummy(test);
   Iterator* it = dummy->create_iterator();
   CountVisitor* visitor = new CountVisitor();
   
   while (!it->is_done()) {
     std::cout << it->current()->evaluate() << std::endl;
     it->current()->accept(visitor);
     it->next();
   }

  EXPECT_EQ(visitor->div_count(), 1);
}

   TEST(ItTest,SubTest) {
   Base* left = new Op(3);
   Base* right = new Op(4);
   Base* test = new Sub(left, right);
   Dummy* dummy = new Dummy(test);
   auto it = dummy->create_iterator();
   CountVisitor* visitor = new CountVisitor();

   while (!it->is_done()) {
     std::cout<< it->current()->evaluate() << std::endl;
     it->current()->accept(visitor);
     it->next();
   }

  EXPECT_EQ(visitor->sub_count(), 1);
}
   TEST(ItTest, AddTest) {
   Base* left = new Op(3);
   Base* right = new Op(4);
   Base* test = new Add(left, right);
   Dummy* dummy = new Dummy(test);
   auto it = dummy->create_iterator();
   CountVisitor* visitor = new CountVisitor();

   while (!it->is_done()) {
     it->current()->accept(visitor);
     it->next();
   }

  EXPECT_EQ(visitor->add_count(), 1);
}

*/

TEST(ItTest, SubTest) {
   Base* myleft = new Op(3);
   Base* myright = new Op(4);
   Base* mytest = new Sub(myleft, myright);
   Dummy* dummy = new Dummy(mytest);
   Iterator* myit = new PreorderIterator(dummy);
   CountVisitor* myvisitor = new CountVisitor();

   myit->first();
   std::cout << myit->current()->evaluate() << std::endl;
   while (!myit->is_done()) {
     std::cout << myit->current()->evaluate() << std::endl;
     myit->current()->accept(myvisitor);
     myit->next();
   }

  EXPECT_EQ(myvisitor->sub_count(), 1);
}
 
TEST(ItTest, AddnDivTest) {
   Base* left = new Op(3);
   Base* right = new Op(4);
   Base* test = new Div(left, right);
   Base* right2 = new Op(5);
   Base* test2 = new Add(test, right2);
   Dummy* dummy = new Dummy(test2);
   Iterator* myit = new PreorderIterator(dummy);
   CountVisitor* myvisitor = new CountVisitor();

   myit->first();
   std::cout << myit->current()->evaluate() << std::endl;
   while (!myit->is_done()) {
     std::cout << myit->current()->evaluate() << std::endl;
     myit->current()->accept(myvisitor);
     myit->next();
   }

  EXPECT_EQ(myvisitor->div_count(), 1);
  EXPECT_EQ(myvisitor->add_count(), 1);
  EXPECT_EQ(myvisitor->op_count(), 3);
}

TEST(ItTest, MultnMultTest) {
   Base* left = new Op(3);
   Base* right = new Op(4);
   Base* test = new Mult(left, right);
   Base* right2 = new Op(5);
   Base* test2 = new Mult(test, right2);
   Dummy* dummy = new Dummy(test2);
   Iterator* myit = new PreorderIterator(dummy);
   CountVisitor* myvisitor = new CountVisitor();

   myit->first();
   std::cout << myit->current()->evaluate() << std::endl;
   while (!myit->is_done()) {
     std::cout << myit->current()->evaluate() << std::endl;
     myit->current()->accept(myvisitor);
     myit->next();
   }

  //EXPECT_EQ(myvisitor->div_count(), 1);
  EXPECT_EQ(myvisitor->mult_count(), 2);
  //EXPECT_EQ(myvisitor->op_count(), 3);
}

#endif // __ITERATOR_TEST_HPP__
