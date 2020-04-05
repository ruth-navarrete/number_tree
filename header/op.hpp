#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    protected:
        double operand;

    public:
        Op(double value) : Base() {
            operand = value;
        }

        virtual double evaluate() {
            return operand;
        }

        virtual std::string stringify() {
            return std::to_string(operand);
        }

        Iterator* create_iterator() {
            Iterator* it = new NullIterator(this);
            return it;
        }
        void accept(CountVisitor* v) {
           v->visit_op();
        }
};
#endif


