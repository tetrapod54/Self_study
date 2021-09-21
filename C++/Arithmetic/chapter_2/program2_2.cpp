#include <iostream>
#include <vector>

std::vector<double> matrix_sum(std::vector<double> vec1,std::vector<double> vec2){
    try{
        int vecsize = vec1.size()-vec2.size();
        if(vecsize!=0){
            throw"要素数が等しくないので、内積を求めることができません。";
        }
    }
    catch(std::string e){
        std::cout << e << std::endl;
    }

    std::vector<double> sum;

    for(int i=0;i<vec1.size();i++){
        sum.push_back(vec1[i]+vec2[i]);
    }

    return sum;
}

int main(){
    int const N = 10;
    std::vector<double> vec1(N,100);
    std::vector<double> vec2(N,300);

    std::vector<double> ans = matrix_sum(vec1,vec2);

    for(int i=0;i<ans.size();i++){
        std::cout << ans.at(i) << std::endl;
    }

}