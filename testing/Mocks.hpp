#ifndef __MOCKS_HPP__
#define __MOCKS_HPP__

#include "../header/base.hpp"

class GreaterDecimalOpMock : public Base {
    public:
        GreaterDecimalOpMock() { };
        virtual double evaluate() { return 0.000123; }
        virtual std::string stringify() { return "0.000123"; }
};

class GreaterDecimalRandMock : public Base {
    public:
        GreaterDecimalRandMock() { };
        virtual double evaluate() { return 0.000123; }
        virtual std::string stringify() { return "0.000123"; }
};

class NegEightyNineOpMock: public Base {
    public:
        NegEightyNineOpMock() { };
        virtual double evaluate() { return -89.3; }
        virtual std::string stringify() { return "-89.300000"; }
};

class NegEightyNineRandMock: public Base {
    public:
        NegEightyNineRandMock() { };
        virtual double evaluate() { return -89.3; }
        virtual std::string stringify() { return "-89.300000"; }
};

class NegOneOpMock : public Base {
    public:
        NegOneOpMock() {};
        virtual double evaluate() { return -1.0; }
        virtual std::string stringify() { return "-1.000000"; }
};

class NegOneRandMock : public Base {
    public:
        NegOneRandMock() {};
        virtual double evaluate() { return -1.0; }
        virtual std::string stringify() { return "-1.000000"; }
};

class OneOpMock : public Base {
    public:
        OneOpMock() { };
        virtual double evaluate() { return 1.15; }
        virtual std::string stringify() { return "1.150000"; }
};

class OneRandMock : public Base {
    public:
        OneRandMock() { };
        virtual double evaluate() { return 1.15; }
        virtual std::string stringify() { return "1.150000"; }
};

class SevenOpMock : public Base {
    public:
        SevenOpMock() {};
        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.500000"; }
};

class SevenRandMock : public Base {
    public:
        SevenRandMock() {};
        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.500000"; }
};

class ZeroOpMock : public Base {
    public:
        ZeroOpMock() {};
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.000000"; }
};

class ZeroRandMock : public Base {
    public:
        ZeroRandMock() {};
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.000000"; }
};

class SevenThreeMultMock : public Base {
    public:
        SevenThreeMultMock() {};
        virtual double evaluate() { return 23.25; }
        virtual std::string stringify() { return "7.500000*3.100000"; }
};

class FiveFourMultMock : public Base {
    public:
        FiveFourMultMock() {};
        virtual double evaluate() { return 24.3; }
        virtual std::string stringify() { return "5.400000*4.500000"; }
};

class ZeroMultMock : public Base {
    public:
        ZeroMultMock() {};
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.000000*1.000000"; }
};

class EighteenAddMock : public Base {
    public:
        EighteenAddMock() {};
        virtual double evaluate() { return 18.250025; }
        virtual std::string stringify() { return "0.000000+18.250025"; }
};

class TwoOneAddMock : public Base {
    public:
        TwoOneAddMock() {};
        virtual double evaluate() { return 3.7; }
        virtual std::string stringify() { return "2.300000+1.400000"; }
};

class ZeroAddMock : public Base {
    public:
        ZeroAddMock() {};
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.000000+0.000000"; }
};

class ZeroThreeSubMock : public Base {
    public:
        ZeroThreeSubMock() {};
        virtual double evaluate() { return -3.2; }
        virtual std::string stringify() { return "0.000000-3.200000"; }
};

class FiveTwoSubMock : public Base {
    public:
        FiveTwoSubMock() {};
        virtual double evaluate() { return 3.2; }
        virtual std::string stringify() { return "5.500000-2.300000";}
}; 

class NegTwoFiveSubMock : public Base {
    public:
        NegTwoFiveSubMock() {};
        virtual double evaluate() { return -7.0; }
        virtual std::string stringify() { return "-2.000000-5.000000"; }
};

class OneDivSubMock : public Base {
    public:
        OneDivSubMock() {};
        virtual double evaluate() { return 1.0; }
        virtual std::string stringify() {return "5.5/5.5"; }
};

class ZeroDivMock : public Base {
    public:
        ZeroDivMock() {};
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.000000/10.000000"; }
};

class HalfDivMock : public Base {
    public:
        HalfDivMock() {};
        virtual double evaluate() { return 0.5; }
        virtual std::string stringify() { return "1.000000/2.000000"; }
};

class TwoPowMock : public Base {
    public:
        TwoPowMock() {};
        virtual double evaluate() { return 1.0; }
        virtual std::string stringify() { return "1.000000**2.000000"; }
};

class HalfPowMock : public Base {
    public:
        HalfPowMock() {};
        virtual double evaluate() { return 2.0; }
        virtual std::string stringify() { return "4.000000**0.500000"; }
};

class NegTwoPowMock : public Base {
    public:
        NegTwoPowMock() {};
        virtual double evaluate() { return 0.062500; }
        virtual std::string stringify() { return "4.000000**-2.000000"; }
};

class NegSevenThreeMultMock : public Base {
    public:
        NegSevenThreeMultMock() {};
        virtual double evaluate() { return 26.25; }
        virtual std::string stringify() { return "7.500000*3.500000"; }
};

class ZeroMult : public Base {
    public:
        ZeroMult() {};
        virtual double evaluate() { return 0.0; }
        virtual std::string strinify() { return "0.000000*2.000000"; }
};

class Add1Mock: public Base {
    public:
        Add1Mock() { };

        virtual double evaluate() { return 2+3; }
        virtual std::string stringify() { return "5"; }
};

class Rand1Mock: public Base {
    public:
        Rand1Mock() { };

        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};

class Rand2Mock: public Base {
    public:
        Rand2Mock() { };

        virtual double evaluate() { return -18.2; }
        virtual std::string stringify() { return "-18.2"; }
};

class Rand3Mock: public Base {
    public:
        Rand3Mock() { };

        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.0"; }
};

class SixOpMock: public Base {
    public:
        SixOpMock() { };

        virtual double evaluate() { return 0.000123; }
        virtual std::string stringify() { return "0.000123"; }
};

#endif // __MOCKS_HPP__
