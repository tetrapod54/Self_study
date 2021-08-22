#include <cstring>
#include <iostream>

int main(void){

    char tmp[16];
    char s1[16], s2[16], s3[16];

    std::cout << "文字列を入力してください：";
    std::cin >> tmp ;

    strcpy(s1,strcpy(s2,tmp));

    std::cout << "文字列s1は\"" << s1 << "\"です" << std::endl;
    std::cout << "文字列s2は\"" << s2 << "\"です" << std::endl;
    std::cout << "文字列s3は\"" << strcpy(s3,tmp) << "\"です" << std::endl;

    char* x = "XXXXXXXXX";

    strcpy(s3,x); strncpy(s3,"12345",3); std::cout << "s3 = " << s3 << std::endl;
    strcpy(s3,x); strncpy(s3,"12345",5); std::cout << "s3 = " << s3 << std::endl;
    strcpy(s3,x); strncpy(s3,"12345",7); std::cout << "s3 = " << s3 << std::endl;
    strcpy(s3,x); strncpy(s3,"1234567890",9); std::cout << "s3 = " << s3 << std::endl;
}