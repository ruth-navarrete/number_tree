#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include <iostream>
#include "base.hpp"
#include "add.hpp"
#include "divide.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "subtract.hpp"

#include <string>
#include <cctype>
#include <cstring>
#include <vector>

class Factory {
    private:
        bool is_dig(char[]);
        std::vector<Base*> sentence;
    public:
        Factory() { }
        Base* parse(char** input, int length);
};

#endif // __FACTORY_HPP__
