#ifndef __PAREN_HPP__
#define __PAREN_HPP__

#include "Decorator.hpp"
#include <iostream>
#include <string>

class Paren : public Decorator {
    protected:
      //Base* myBase;
    public:
      Paren(Base* m) : Decorator(m) { }
      
      virtual std::string stringify () {
	std::string text = mod->stringify();
        if (text.empty()) { std::cout << "empty stirng" << std::endl; return text; }
	text.append(")");
        text.insert(0, "(");
        return text;
      }
      void accept(CountVisitor* v) {
           v->visit_paren();
        }
};

#endif 
