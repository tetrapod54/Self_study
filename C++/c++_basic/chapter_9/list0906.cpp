#include <iostream>

double power(double x, int n);

int main(void){

    double a;
    int b;

    std::cout << "aのb乗を求めます。" << std::endl;
    std::cout << "実数a："; std::cin >> a;
    std::cout << "実数b："; std::cin >> b;
    std::cout << a << "の" << b << "乗は" << power(a,b) << "です。" << std::endl;
}