#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>
#include <iostream>
#include "../iterator.hpp"
#include "../visitor.hpp"

class CountVisitor;
class Iterator;

class Base {
    public:
        /* Constructors */
        Base() { };

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
        virtual Iterator* create_iterator() = 0;

        virtual Base* get_left(){ return nullptr; };
        virtual Base* get_right(){ return nullptr; };
	virtual void accept(CountVisitor* visitor ){} ;
};

#endif //__BASE_HPP__
