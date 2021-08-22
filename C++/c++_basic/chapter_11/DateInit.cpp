#include "Date.h"
#include <iostream>

int main(){

    Date a(2025,11,18);
    Date b = a;
    Date c = Date(2023,12,27);

    std::cout << "a =" << a.year() << "年" << a.month() << "月" << a.day() << "日" << std::endl;
    std::cout << "b =" << b.year() << "年" << b.month() << "月" << b.day() << "日" << std::endl;
    std::cout << "c =" << c.year() << "年" << c.month() << "月" << c.day() << "日" << std::endl;
}