#include <iostream>
#include "Counter.h"

int main(){
    int no;
    Counter x;
    Counter y;

    std::cout << "カウントアップ回数：" ;
    std::cin >> no;

    for(int i=0; i< no; i++){
        std::cout << x++ << " " << ++y << std::endl;
    } 

    std::cout << "カウントダウン回数：" ;
    std::cin >> no;

    for(int i=0; i< no; i++){
        std::cout << x-- << " " << --y << std::endl;
    }

    if(!x){
        std::cout << "xは０です。" << std::endl;
    }
    else{
        std::cout << "xは０ではありません。" << std::endl;
    }

}