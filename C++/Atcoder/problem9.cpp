#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int N = 0 ;
    int Y = 0 ;
    std::cin >> N >> Y;
    int res10000,res5000,res1000;
    res10000 = res5000 = res1000 = -1;

    for(int x=0;x<=N;x++){
        for(int y=0;x+y<=N;y++){
            int z = N - x - y ;
            int total = 10000*x + 5000*y + 1000*z;
            if(total == Y){
                res10000 = x;
                res5000 = y;
                res1000 = z;
            }
        }
    }

    std::cout << res10000 << " " << res5000 << " " << res1000 << std::endl;

}