#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "Decorator.hpp"
#include <stdlib.h>         /* abs */

class Abs : public Decorator {
    public:
        Abs(Base* base) : Decorator(base) { }

        virtual double evaluate() {
            return fabs(mod->evaluate());
        }
        void accept(CountVisitor* v) {
           v->visit_abs();
        }
};

#endif // __ABS_HPP__
