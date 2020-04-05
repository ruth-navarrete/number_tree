#ifndef __TRUNCATE_HPP__
#define __TRUNCATE_HPP__

#include "Decorator.hpp"

class Truncate : public Decorator {
    public:	
      Truncate(Base* myBase) : Decorator(myBase) { }

      virtual std::string stringify () {
          return std::to_string(mod->evaluate());
      }
      void accept(CountVisitor* v) {
           v->visit_trunc();
        }
};

#endif
