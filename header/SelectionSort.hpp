#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "sort.hpp"

class SelectionSort : public Sort {
protected:
    Container* container;
public:
    /* Constructors */
    SelectionSort() : Sort() {}
    
    /* Pure Virtual Functions */
    virtual void sort(Container* container);
};
#endif
