#include <iostream>

template<typename T = double>
T pi(){return T(3.1415926536);}

int main(void){

    int x = pi<int>();
    double y = pi<>();

    std::cout << x << " " << y << std::endl;
    
}