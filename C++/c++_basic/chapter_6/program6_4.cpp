#include <iostream>

void swap(int& x, int& y){
    int t = x;
    x = y;
    y = t;
}

int main(void){

    int a, b;

    std::cout << "変数a:" ; std::cin >> a;
    std::cout << "変数b:" ; std::cin >> b;

    swap(a,b);

    
    std::cout << "変数aとbの値を交換しました" << std::endl;
    std::cout << "変数aの値は" << a << "です。" << std::endl;
    std::cout << "変数bの値は" << b << "です。" << std::endl;
}