#ifndef ___Member
#define ___Member

#include <iostream>

class Base{
private:
    int a;
    int b;

public:
    Base(int aa, int bb) : a(aa),b(bb) { }
    void func() const {
        std::cout << " a = " << a << std::endl;
        std::cout << " b = " << b << std::endl;
    }
};

class Derived : public Base{
    int x;

public:
    Derived(int aa, int bb, int xx): Base(aa,bb), x(xx) { }
    void method() const {
        func();
        std::cout << "x = " << x << std::endl;
    }
};

#endif