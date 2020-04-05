#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "Decorator.hpp"
#include <math.h>         /* ceil */

class Ceil : public Decorator {
    private:
        //Base* mod;
    public:
        Ceil(Base* base) : Decorator(base) { }
        virtual double evaluate() {
            return ceil(this->mod->evaluate());
        }
        void accept(CountVisitor* v) {
           v->visit_ceil();
        }
};

#endif // __CEIL_HPP__
