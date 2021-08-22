#include <iostream>

int main(void){

    int n = 135;
    std::cout << "n:" << n << std::endl;
    std::cout << "&n:" << &n  << "番地" << std::endl;

    int* ptr =&n;

    std::cout << "ptr:" << ptr << "番地"  << std::endl;
    std::cout << "*ptr:" << *ptr << std::endl;

}