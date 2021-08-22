#include <iostream>

int main(void){

    int* x = new int;
    std::cout << "整数：";
    std::cin >> *x;
    std::cout << "*x = " << *x << std::endl;
    delete x;
}