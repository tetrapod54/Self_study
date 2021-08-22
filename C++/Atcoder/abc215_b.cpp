#include <iostream>
#include <string>

int main(void){
    long long int N ;
    int counter = 0;
    std::cin >> N;

    while(N>=2){
        N /= 2;
        counter++;
    }

    std::cout << counter << std::endl;
}