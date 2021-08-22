#include <iostream>

void sum_mul(int x, int y, int* sum, int* mul){

    *sum = x + y;
    *mul = x * y;
}

int main(void){

    int a, b;
    int wa = 0 , seki = 0;

    std::cout << "整数a："; std::cin >> a;
    std::cout << "整数b："; std::cin >> b;

    sum_mul(a,b, &wa,&seki);

    std::cout << "和は" << wa << "です。" << std::endl;
    std::cout << "積は" << seki << "です。" << std::endl;
}