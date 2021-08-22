#include <iostream>

void put_stars(int n){

    while(n-- > 0){
        std::cout << "*";
    }
}

int main(void){

    int n;

    std::cout << "左下直角二等辺三角形を表示します。" << std::endl;
    std::cout << "段数は：" ; std::cin >> n;

    for(int i=1; i<=n;i++){
        put_stars(i);
        std::cout << std::endl;
    }

}