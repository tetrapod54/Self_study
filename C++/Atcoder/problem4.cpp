#include <iostream>
#include <vector>

int main(){

    int n = 0;;
    int flag = 1;
    int num = 0;
    std::cin >> n;

    std::vector<int> a(n);

    for(int i=0;i<n;i++){
        std::cin >> a[i];
    }

    while(flag){
        for(int i=0;i<n;i++){
            if(a[i]%2 ==1){
                flag = 0;
                break;
            }
            else{
                a[i] = a[i]/2;
            }
        }
        if(flag == 1){
        ++num;
            }
    }

    std::cout << num << std::endl;

}