#include <climits>
#include <iostream>

int main(void){

    char c;

    std::cout << "文字を入力せよ。:" ;
    std::cin >> c ;

    std::cout << "文字'" << c << "'の文字コードは" << int(c) << "です。" << std::endl ;
}