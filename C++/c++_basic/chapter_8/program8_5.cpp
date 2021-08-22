#include <cstring>
#include <iostream>

int main(void){

    char s[15];
    const char* x= "ABC";

    strcpy(s,"QWE");
    strcat(s,"RTY");

    std::cout << "s = " << s << std::endl;

    strcpy(s,x); strncat(s,"123",1); std::cout << "s = " << s << std::endl;

    strcpy(s,x); strncat(s,"123",3); std::cout << "s = " << s << std::endl;

    strcpy(s,x); strncat(s,"123",5); std::cout << "s = " << s << std::endl;

    strcpy(s,x); strncat(s,"123",7); std::cout << "s = " << s << std::endl;

    strcpy(s,x); strncat(s,"123",9); std::cout << "s = " << s << std::endl;

}