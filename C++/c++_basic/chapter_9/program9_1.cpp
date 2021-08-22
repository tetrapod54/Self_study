#include <iostream>

template <class Type>
Type maxof(const Type x[], int n){

    Type max = x[0];
    for(int i=1; i<n;i++){
        if(x[i] > max){
            max = x[i];
        }
    }

    return max;
}

int main(void){

    const int isize = 8;
    int ix[isize];

    std::cout << isize << "個の整数を入力せよ。" << std::endl;
    for(int i=0;i<isize;i++){
        std::cout << i + 1 << ":";
        std::cin >> ix[i];
    }

    std::cout << "最大値は" << maxof(ix,isize) << "です。" << std::endl << std::endl;

    const int dsize = 5;
    double dx[dsize];

    std::cout << isize << "個の実数を入力せよ。" << std::endl;
    for(int i=0;i<dsize;i++){
        std::cout<< i + 1 << ":";
        std::cin >> dx[i];
    }

    std::cout << "最大値は" << maxof(dx,isize) << "です。" << std::endl << std::endl;
}