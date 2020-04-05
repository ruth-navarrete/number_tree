#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include "Decorator.hpp"
#include <math.h>         /* floor */

class Floor : public Decorator {
    public:
        Floor(Base* base) : Decorator(base) { }
        virtual double evaluate() {
            return floor(this->mod->evaluate());
        }
        void accept(CountVisitor* v) {
           v->visit_floor();
        }
};

#endif // __FLOOR_HPP__

