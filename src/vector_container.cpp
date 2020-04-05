#ifndef __VECTOR_CONTAINER_CPP__
#define __VECTOR_CONTAINER_CPP__

#include "../header/vector_container.hpp"

// set the type of sorting algorithm
void VectorContainer::set_sort_function(Sort* function) {
    sort_function = function;
}

// push the top pointer of the tree into container
void VectorContainer::add_element(Base* element) {
    v_cont.push_back(element);
    return;
}

// iterate through tree elememts and output the expressions (use stringify())
// outputs each expression on newline
void VectorContainer::print() {
    for (unsigned i = 0; i < v_cont.size(); ++i) {
        std::cout << v_cont.at(i)->stringify() << std::endl;
    }
    return;
}

// calls on the previously set sorting-algorithm. Checks if sort_funtion is not
// null, throw exception if otherwise
void VectorContainer::sort() {
    if (this->sort_function == nullptr) {
        std::cout << "Exception: sort_funtion is null" << std::endl;
        return;
    }
    this->sort_function->sort(this);
    return;
}

// switch tree locations
void VectorContainer::swap(int i, int j) {
    Base* temp = v_cont.at(i);
    v_cont.at(i) = v_cont.at(j);
    v_cont.at(j) = temp;
    return;
}

// get top ptr of tree at index i
Base* VectorContainer::at(int i) {
    return v_cont.at(i);
}

// return container size
int VectorContainer::size() {
    return v_cont.size();
}

#endif // __VECTOR_CONTAINER_CPP__
