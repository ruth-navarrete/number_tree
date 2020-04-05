#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "sort.hpp"
#include "base.hpp"
#include "container.hpp"

class Decorator : public Base {
   protected:
      Base *mod;

    public:
        Decorator(Base* m) : Base() {
            mod = m;
        }

        virtual double evaluate() {
           return mod->evaluate();
        }

        virtual std::string stringify(){
           return mod->stringify();
        }

        virtual Iterator* create_iterator() {
            Iterator* it = new UnaryIterator(this);
            return it;
        }
        Base* get_left() { return mod; }
};

#endif
