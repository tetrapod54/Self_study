#include <iostream>
#include <algorithm>
#include <vector>

int main(void){
    int a,b,c ;
    a = b = c = 0;
    int x = 0;
    int num = 0;
    
    std::cin >> a >> b >> c >> x ;
    for(int i=0;i<=a;i++){
        for(int j=0; j<=b;j++){
            for(int k=0; k<=c;k++){
                if((500*i+100*j+50*k)==x){
                    ++num;
                }
            }
        }
    }

    std::cout << num << std::endl;

}