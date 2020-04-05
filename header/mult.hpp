#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "rand.hpp"
#include "op.hpp"

class Mult : public Base {
    protected:
        Base* op1;
        Base* op2;

    public:
        Mult(Base* operand1, Base* operand2) : Base () {
            op1 = operand1;
            op2 = operand2;
        }

        Mult(Base* operand1) : Base () {
            op1 = operand1;
            op2 = new Rand();
        }

        Mult() : Base() {
            op1 = new Rand();
            op2 = new Rand();
        }

        virtual double evaluate() {
            if (this == nullptr) { return -1; }
            return op1->evaluate() * op2->evaluate();
        }

        virtual std::string stringify() {
            if (this == nullptr) { return "error"; }
            return op1->stringify() + "*" + op2->stringify();
        }
        Iterator* create_iterator() {
            Iterator* it = new BinaryIterator(this);
            return it;
        }

        void accept(CountVisitor* v) {
           v->visit_mult();
        }

        Base* get_left() { return op1; }
        Base* get_right() { return op2; }
};

#endif // __MULT_HPP__
