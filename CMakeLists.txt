CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
    ~/lab-08-visitor-pattern-yabbie_ruth_8/src/unit_test.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/src/bubble_sort.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/src/vector_container.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/src/SelectionSort.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/src/ListContainer.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/src/factory.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/binary_iterator.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/unary_iterator.cpp
    ~/lab-08-visitor-pattern-yabbie_ruth_8/preorder_iterator.cpp
)


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
