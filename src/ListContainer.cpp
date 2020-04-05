#ifndef __LISTCONTAINER_CPP__
#define __LISTCONTAINER_CPP__

#include "../header/ListContainer.hpp"

void ListContainer::set_sort_function(Sort* function) {
	sort_function = function;
}

void ListContainer::add_element(Base* element) {
	myList.push_back(element);
	return;
}

void ListContainer::print() {
       for(unsigned i = 0; i < myList.size(); ++i) { 
            this->at(i)->stringify();
        }
	return;
}

void ListContainer::sort() {
	if (this->sort_function == nullptr) {
	   std::cout << "Exception: sort_function is null" << std::endl;
	   return;
	}
	this->sort_function->sort(this);
	return;
}

void ListContainer::swap(int i, int j) {
     std::list<Base*>::iterator iter1 = myList.begin();
     std::advance(iter1,i);

     std::list<Base*>::iterator iter2 = myList.begin();
     std::advance(iter2,j);

     std::swap(*iter1,*iter2);
}

Base* ListContainer::at(int i) {
     std::list<Base*>::iterator iter = myList.begin();
     std::advance(iter,i);
     return *iter;
}

int ListContainer::size() {
     return myList.size();
}

#endif
