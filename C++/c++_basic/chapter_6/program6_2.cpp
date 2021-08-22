#include <iostream>

double power(double x, int n){

    double tmp = 1.0;

    for(int i=0; i<n;i++){
        tmp *= x;
    }

    return tmp;
}

int main(void){

    double a;
    int b;

    std::cout << "aのb乗を求めます" << std::endl;
    std::cout << "実数a:" ; std::cin >> a;
    std::cout << "自然数b:" ; std::cin >> b ;

    std::cout << a << "の" << b << "乗は、" << power(a,b) << "です。" << std::endl;
}