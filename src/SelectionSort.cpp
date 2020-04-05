#ifndef __SELECTIONSORT_CPP__
#define __SELECTIONSORT_CPP__

#include "../header/SelectionSort.hpp"

void SelectionSort::sort(Container* container) {
        int i, j, min_idx;
        int n = container->size();
    
        for (i = 0; i < n-1; i++)
        {
            min_idx = i;
            for (j = i+1; j < n; j++) {
                if (container->at(j)->evaluate() < container->at(min_idx)->evaluate()) {
                    min_idx = j;
                }
            }
            container->swap(min_idx, i);
    }
};
#endif
