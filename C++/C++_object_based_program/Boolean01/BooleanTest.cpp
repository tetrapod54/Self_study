#include <iostream>
#include "Boolean.h"

Boolean int_eq(int x, int y){
    return x == y;
}

int main(){
    int n;

    Boolean a;
    Boolean b = a;
    Boolean c = 100;
    Boolean x[8];

    std::cout << "整数値：";
    std::cin >> n;

    x[0] = int_eq(n,5);
    x[1] = (n !=3);
    x[2] = Boolean::False;
    x[3] = 1000;
    x[4] = c == Boolean::True;

    std::cout << "aの値：" << int(a) << std::endl;
    std::cout << "bの値：" << static_cast<const char*>(b) << std::endl;

    for(int i=0;i<n;i++){
        std::cout << "x[" << i << "] =" << x[i] << std::endl;  
    }

}