#include <iostream>
#include <vector>

int main(){

    int n = 0;
    int k = 0;

    std::cin >> n;
    std::vector<int> vec1(n);

    for(int i=0 ;i<n;i++){
        std::cin >> k ;
        vec1[i] = k;
        std::cout << vec1[i] << std::endl;

    }

    while(std::cin >> k){
        vec1.push_back(k);
    }
}