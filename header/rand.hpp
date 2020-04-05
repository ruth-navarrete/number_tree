#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>

class Rand : public Base {
    protected:
        double operand;

    public:
        Rand() : Base() {
            operand = rand() % 100;
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
        virtual void accept(CountVisitor* v) {
          v->visit_rand();
         }
};

#endif // __RAND_HPP__
