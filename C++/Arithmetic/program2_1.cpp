#include <iostream>
#include <vector>
#include <string>

double inner_product(std::vector<double> vec1,std::vector<double> vec2){
    double product = 0;

    try{
        int vecsize = vec1.size()-vec2.size();
        if(vecsize!=0){
            throw"要素数が等しくないので、内積を求めることができません。";
        }
    }
    catch(std::string e){
        std::cout << e << std::endl;
    }


    for(int i=0;i<vec1.size();i++){
        product += vec1[i] * vec2[i];
    }

    return product;
}

int main(){
    int N = 100; 
    std::vector<double> vec1(N,30);
    std::vector<double> vec2(N,100);

    double ans = inner_product(vec1,vec2);

    std::cout << ans << std::endl;
}