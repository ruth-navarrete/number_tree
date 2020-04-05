#ifndef __SUBTRACT_HPP__
#define __SUBTRACT_HPP__

#include "base.hpp"

class Sub : public Base {
    protected:
        Base* op1;
        Base* op2;

    public:
        Sub(Base* par1, Base* par2) : op1(par1), op2(par2) { }
        virtual double evaluate() {
                if (this == nullptr) { return -1; }
                return op1-> evaluate()  - op2-> evaluate();
        }
        virtual std::string stringify() {
                if (this == nullptr) { return "error"; }
                return this->op1->stringify() + "-" + this->op2->stringify();
        }
        Iterator* create_iterator() {
            Iterator* it = new BinaryIterator(this);
            return it;
        }
        Base* get_left() { return op1; }
        Base* get_right() { return op2; }
        
        void accept(CountVisitor* v) {
           v->visit_sub();
        }
};

#endif //__SUBTRACT_HPP__
