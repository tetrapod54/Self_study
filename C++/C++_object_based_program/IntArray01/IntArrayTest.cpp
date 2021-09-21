#include <iostream>
#include "IntArray.h"

int main(){
    int n;

    std::cout << "要素数を入力せよ：";
    std::cin >> n;

    IntArray x(n);

    for (int i=0; i<n;i++){
        x[i] = i;
    }
    for (int i=0; i<n;i++){
        std::cout << "x[" << i << "] = " << x[i] <<std::endl;
    }
}