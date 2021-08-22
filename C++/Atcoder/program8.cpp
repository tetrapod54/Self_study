#include <iostream>
#include <algorithm>
#include <vector>

int main(void){
    int N = 0;
    int sum = 0;
    std::cin >> N;
    std::vector<int> vec(N);
    std::vector<int> num(101,0);

    for(int i=0;i<N;i++){
        std::cin >> vec[i];
    }

    for(int i=0;i<N;i++){
        ++num[vec[i]];
    }

    for(int i=1;i<=100;i++){
        if(num[i]){
            ++sum;
        }
    }

    std::cout << sum << std::endl;
}