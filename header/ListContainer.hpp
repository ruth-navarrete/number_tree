#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include "container.hpp"
#include <list>
#include <iostream>

class BubbleSort;

class ListContainer : public Container {
     protected:
     std::list<Base*> myList;
     public:
     ListContainer() : Container() {}
     ListContainer(Sort* function) : Container(function) {}

     void set_sort_function(Sort* function);
     virtual void add_element(Base* element);
     virtual void print();
     virtual void sort();
     virtual void swap(int i, int j);
     virtual Base* at(int i);
     virtual int size();
};
#endif
