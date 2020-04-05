#ifndef __FACTORY_CPP__
#define __FACTORY_CPP__

#include "../header/factory.hpp"

bool Factory::is_dig(char arg[]) {
    int i = 0;

    /* check if arg is negative */
    if (arg[0] == '-') {
        if (arg[1] == '\0') {
            return false;
        }
        i = 1;
    }
    for ( ; arg[i] != '\0'; i++) {
        /* check is arg is not digit */
        if (!isdigit(arg[i])) {
            return false;
        }
    }
    return true;
}

Base* Factory::parse(char** input, int length) {
    /* variables to use to compare */
    std::string add = "+", sub = "-", mult = "*", div = "/", pow = "**";

    /* conveert strings to char** to compare */
    char* add_c = new char[add.size() + 1];
    strcpy(add_c, add.c_str());

    char* sub_c = new char[sub.size() + 1];
    strcpy(sub_c, sub.c_str());

    char* mult_c = new char[mult.size() + 1];
    strcpy(mult_c, mult.c_str());

    char* div_c = new char[div.size() + 1];
    strcpy(div_c, div.c_str());

    char* pow_c = new char[pow.size() + 1];
    strcpy(pow_c, pow.c_str());

    /* iteration through input */
    for (int i = 0; i < length; i++) {
        /* check if any of the signs or a digit */
        if ( is_dig(input[i]) ) {
            int num = atof(input[i]);
            Base* op = new Op(num);
            this->sentence.push_back(op);
        }

        else if ( (!strcmp(input[i], add_c)) ) {
            if ( !( ((i + 1) < length)  || (i + 1 == length) ) ) {
                goto END;
            }
            int num = atof(input[i + 1]);
            Base* op = new Op(num);
            Base* add = new Add(this->sentence.at(0), op);
            this->sentence.at(0) = add;
            ++i;
        }

        else if ( (!strcmp(input[i], sub_c)) ) {
            if ( !( ((i + 1) < length)  || (i + 1 == length) ) ) {
                goto END;
            }
            int num = atof(input[i + 1]);
            Base* op = new Op(num);
            Base* sub = new Sub(this->sentence.at(0), op);
            this->sentence.at(0) = sub;
            ++i;
        }

        else if ( (!strcmp(input[i], mult_c)) ) {
            if ( !( ((i + 1) < length)  || (i + 1 == length) ) ) {
                goto END;
            }
            int num = atof(input[i + 1]);
            Base* op = new Op(num);
            Base* mult = new Mult(this->sentence.at(0), op);
            this->sentence.at(0) = mult;
            ++i;
        }

        else if ( (!strcmp(input[i], div_c)) ) {
            if ( !( ((i + 1) < length)  || (i + 1 == length) ) ) {
                goto END;
            }
            int num = atof(input[i + 1]);
            Base* op = new Op(num);
            Base* div = new Div(this->sentence.at(0), op);
            this->sentence.at(0) = div;
            ++i;
        }

        else if ( (!strcmp(input[i], pow_c)) ) {
            if ( !( ((i + 1) < length)  || (i + 1 == length) ) ) {
                goto END;
            }
            int num = atof(input[i + 1]);
            Base* op = new Op(num);
            Base* pow = new Pow(this->sentence.at(0), op);
            this->sentence.at(0) = pow;
            ++i;
        }

        else {
            std::cout << "Error: invalid input" << std::endl;
            return nullptr;
        }
    }

    return this->sentence.at(0);
    END:
    std::cout << "Error: invalid input" << std::endl;
    return nullptr;
}

#endif // __FACTORY_CPP__
