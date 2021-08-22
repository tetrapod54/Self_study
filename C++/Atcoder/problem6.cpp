#include <iostream>
#include <vector>

int findSumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main(){
    int N,A,B;
    std::cin >> N >> A >> B;
    int total = 0;
    for(int i=1;i<=N;i++){
        int sum = findSumOfDigits(i);
        if(sum >=A && sum <=B){
            total += i;
        }
    }

    std::cout << total << std::endl;

}