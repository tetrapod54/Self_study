#include <cstring>
#include <iostream>

template <class Type> Type maxof(Type a, Type b){
    return a > b ? a : b;
}

template <> const char* maxof<const char*>(const char* a, const char* b){
    return strcmp(a,b) > 0 ? a : b ;
}

int main(void){

    int a,b;
    char s[64],t[64];

    std::cout << "整数a："; std:: cin >> a ;
    std::cout << "整数b："; std:: cin >> b ;

    std::cout << "文字列s："; std:: cin >> s ;
    std::cout << "文字列t："; std:: cin >> t ;   

    std::cout << "aとbで大きいのは" << maxof(a,b) << "です。" << std::endl;
    std::cout << "sとtで大きいのは" << maxof<const char*>(s,t) << "です。" << std::endl;
    std::cout << "aとbで大きいのは" << maxof<const char*>(s,"ABC") << "です。" << std::endl;
}
