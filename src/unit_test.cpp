#include "gtest/gtest.h"

#include "../header/base.hpp"
#include "../header/op.hpp"
#include "../header/rand.hpp"
#include "../header/add.hpp"
#include "../header/subtract.hpp"
#include "../header/mult.hpp"
#include "../header/divide.hpp"
#include "../header/pow.hpp"
#include "../header/SelectionSort.hpp"
#include "../header/bubble_sort.hpp"
#include "../header/ListContainer.hpp"
#include "../header/vector_container.hpp"
#include "../header/Paren.hpp"
#include "../header/Truncate.hpp"
#include "../header/abs.hpp"
#include "../header/floor.hpp"
#include "../header/ceil.hpp"
#include "../header/factory.hpp"
#include "../iterator.hpp"
#include "../testing/iterator_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
