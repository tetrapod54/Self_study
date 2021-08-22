#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){

    int num = 0;
    std::string s;
    std::cin >> s;

    int s_len = s.length();


    for(int i=0; i<s_len;i++){
        if(s.at(i) == '0'){
        }
        else{
            num += 1 ;
        }
    }

    std::cout << num << std::endl;

    return 0;

}