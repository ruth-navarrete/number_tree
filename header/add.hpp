#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "rand.hpp"

class Add : public Base {
    protected:
	Base* op1; 
	Base* op2;

    public:
        Add(Base* par1, Base* par2) : Base () {
            op1 = par1;
            op2 = par2;
        }

        Add(Base* par1) : Base () {
            op1 = par1;
            op2 = new Rand();
        }

        Add() : Base () {
            op1 = new Rand();
            op2 = new Rand();
        }

        virtual double evaluate() {
            if (this == nullptr) { return -1; }
            return op1-> evaluate()  + op2-> evaluate(); 
	}

        virtual std::string stringify() {
            if (this == nullptr) { return "error"; }
            return this->op1->stringify() + "+" + this->op2->stringify();
	}

        Iterator* create_iterator() {
            Iterator* it = new BinaryIterator(this);
            return it;
        }

        Base* get_left() { return op1; }
        Base* get_right() { return op2; }
	
	void accept(CountVisitor* v) {
           v->visit_add();
        }

};

#endif //__ADD_HPP__
