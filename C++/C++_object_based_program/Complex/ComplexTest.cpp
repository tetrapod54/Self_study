#include <iostream>
#include "Complex.h"

int main(){
    double re, im;

    std::cout << "aの実部：" ; std::cin >> re;
    std::cout << "aの虚部：" ; std::cin >> im;
    Complex a(re,im);

    std::cout << "bの実部：" ; std::cin >> re;
    std::cout << "bの虚部：" ; std::cin >> im; 
    Complex b(re,im);

    Complex c = -a + b;

    b += 2.0;
    c -=Complex(1.0,1.0);
    Complex d(b.imag(), c.real());

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
}