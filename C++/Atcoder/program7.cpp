#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int N = 0;
    int k = 0;
    std::cin >> N ;

    std::vector<int> vec;

    for(int i=0;i<N;i++){
        std::cin >> k;
        vec.push_back(k);
    }

    std::sort(vec.begin(),vec.end(),std::greater<int>());
    int Alice = 0;
    int Bob = 0;
    for(int i=0;i<N;i++){
        if(i%2==0){
            Alice += vec[i];
        }
        else{
            Bob += vec[i];
        }
    }

    std::cout << Alice - Bob << std::endl;

}