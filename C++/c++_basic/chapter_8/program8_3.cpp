#include <cstring>
#include <iostream>

int main(void){

    char str[100];

    std::cout << "文字列を入力してください：" ; std::cin >> str;

    std::cout << "文字列\"" << str << "\"の長さは" << strlen(str) << "です。" << std::endl;
    
}