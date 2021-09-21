#include <iostream>
#include "IdNo.h"

int main(){
    IdNo a;
    IdNo b;
    IdNo c[4];

    std::cout << "aの識別番号：" << a.id() << std::endl;
    std::cout << "bの識別番号：" << b.id() << std::endl;
    for(int i=0;i<4;i++){
        std::cout << "c[" << i << "]の認識番号：" << c[i].id() << std::endl;
    }
}