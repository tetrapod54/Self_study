#include <cctype>
#include <climits>
#include <iostream>

int main(void){

    char c;
    std::cout << "char型の大きさ :" << sizeof(char) << std::endl;
    std::cout << "変数cの大きさ :" << sizeof(c) << std::endl; 

    short h;
    std::cout << "short型の大きさ :" << sizeof(short) << std::endl;
    std::cout << "変数hの大きさ :" << sizeof(h) << std::endl; 

    int i ;
    std::cout << "int型の大きさ :" << sizeof(int) << std::endl;
    std::cout << "変数iの大きさ :" << sizeof(i) << std::endl; 

    long l;
    std::cout << "long型の大きさ :" << sizeof(long) << std::endl;
    std::cout << "変数lの大きさ :" << sizeof(l) << std::endl; 
}