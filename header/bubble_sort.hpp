#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__

#include "sort.hpp"

class SeletionSort;

class BubbleSort : public Sort {
    public:
        BubbleSort() : Sort() {}

        /* Virtual Functions */
        virtual void sort(Container* container);
};

#endif // __BUBBLE_SORT_HPP__
