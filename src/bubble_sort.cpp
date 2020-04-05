#ifndef __BUBBLE_SORT_CPP__
#define __BUBBLE_SORT_CPP__

#include "../header/bubble_sort.hpp"

void BubbleSort::sort(Container* container) {
    // ASCCENDING bubble sort
    // referencing: https://www.mathbits.com/MathBits/CompSci/Arrays/Bubble.htm
    int i = 0;       // first index
    int j = 0;       // second index
    int flag = 1;    // flag to see if swap has happened
    Base* temp = 0;    // holds value
    int length = container->size();

    for (i = 1; (i <= length) && flag; i++) {
        flag = 0;
        for (j = 0; j < (length - 1); j++) {
            if (container->at(j + 1)->evaluate() < container->at(j)->evaluate()) {
                container->swap(j, j + 1);
                flag = 1;
            }
        }
    }
    return;
}

#endif // __BUBBLE_SORT_CPP__
