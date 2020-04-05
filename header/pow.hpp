#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>

class Pow : public Base {
    protected:
        Base* op1;
        Base* op2;
    public:
        Pow(Base* operand1, Base* operand2) : Base () {
            op1 = operand1;
            op2 = operand2;
        }

        virtual double evaluate() {
            if (this == nullptr) { return -1; }
            return pow(op1->evaluate(), op2->evaluate());
        }

        virtual std::string stringify() {
            if (this == nullptr) { return "error"; }
            return op1->stringify() + "**" + op2->stringify();
        }
        Iterator* create_iterator() {
            Iterator* it = new BinaryIterator(this);
            return it;
        }

        void accept(CountVisitor* v) {
           v->visit_op();
        }
        Base* get_left() { return op1; }
        Base* get_right() { return op2; }
};

#endif // __POW_HPP__
