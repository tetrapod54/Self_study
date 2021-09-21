#include <iostream>

int main(void){
    int n = 135;


    std::cout << "n:" << n << std::endl;
    std::cout << "&n" << &n << std::endl;

    int* l = &n;

    std::cout << "l:" << l << std::endl;
    std::cout << "&l:" << &l << std::endl;
    std::cout << "*l:" << *l << std::endl;

}