#include <iostream>
#include "BaseDerived.h"

int main(){
    Derived dv(1,2,3);
    std::cout << "dv.func()" << std::endl;  dv.func();
    std::cout << "dv.method()" << std::endl; dv.method();
}