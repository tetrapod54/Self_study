#include <iostream>
#include "Date.h"

int main(){

    Date today;

    std::cout << "今日は" << today << "です" << std::endl;
    std::cout << "昨日は" << today.preceding_day() << "です。" << std::endl;
}