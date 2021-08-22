#include <iostream>

template <class T>
T MAX(T x, T y){
    return x < y ? y : x ;
}

int main(void){
    int x = 15;
    int y = 303;

    std::cout << MAX(x,y) << std::endl;
}
