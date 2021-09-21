#include <iostream>
#include "Date.h"

int main(){

    const Date birthday(1963,11,18);
    Date day[3];

    std::cout << "birthday = " << birthday << std::endl;
    std::cout << "birthdayの文字列表現：\"" << birthday.to_string() << "\"" << std::endl;

    for(int i=0; i<3;i++){
        std::cout << "day[" << i << "]の文字列表現：\"" << day[i].to_string() << "\"" << std::endl;
    } 
}