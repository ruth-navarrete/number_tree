#include "../header/Decorator.hpp"
#include "../iterator.hpp"

class Dummy : public Decorator {
  public:
  Dummy(Base* mod) : Decorator(mod) { this->mod = mod; }
  virtual std::string stringify() { return mod->stringify(); }
  virtual double evaluate() { return mod->evaluate(); }
  virtual Iterator* create_iterator() { return new UnaryIterator(this);}
};

