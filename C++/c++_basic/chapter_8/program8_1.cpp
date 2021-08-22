#include <iostream>
#include <typeinfo>

int main(void){

    std::cout << "文字列リテラル\"ABC" << std::endl;
    std::cout << "型：" << typeid("ABC").name() << std::endl;
    std::cout << "大きさ：" << sizeof("ABC") << "\n\n";

    std::cout << "文字列リテラル\"" << std::endl;
    std::cout << "型：" << typeid("").name() << std::endl;
    std::cout << "大きさ：" << sizeof("") << "\n\n";

    std::cout << "文字列リテラル\"ABC\\0DEF" << std::endl;
    std::cout << "型：" << typeid("ABC\0DEF").name() << std::endl;
    std::cout << "大きさ：" << sizeof("ABC\0DEF") << "\n\n";

}