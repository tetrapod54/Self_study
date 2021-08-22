#include <iostream>
#include <string>

int main(void){
    std::string s;
    std::cin >> s;

    if(s == "Hello,World!"){
        std::cout << "AC" << std::endl;
    }
    else{
        std::cout << "WA" << std::endl;
    }

    return 0;
}