#include <iostream>
#include <vector>


void bubble_sort(std::vector<int> &subject){

        for(int i=0;i<subject.size()-1;i++){
        for(int j=0;j<subject.size()-1;j++){
            int max_sub = 0;
            if(subject[j]>subject[j+1]){
                max_sub = subject[j];
                subject[j] = subject[j+1];
                subject[j+1] = max_sub;
            }
        }

    }
}

int main(void){

    std::vector<int> math(3,0);
    std::vector<int> eng(3,0);

    for(int i =0;i<3;i++){
        std::cout << "[" << i + 1 << "]";
        std::cout << "数学："; std::cin >> math[i];
        std::cout << "英語："; std::cin >> eng[i];
    }

    /*
    for(int i=0;i<math.size()-1;i++){
        for(int j=0;j<math.size()-1;j++){
            int max_math = 0;
            if(math[j]>math[j+1]){
                max_math = math[j];
                math[j] = math[j+1];
                math[j+1] = max_math;
            }
        }

    }

    for(int i=0;i<eng.size()-1;i++){
        for(int j=0;j<eng.size()-1;j++){
            int max_eng = 0;
            if(eng[j]>eng[j+1]){
                max_eng = eng[j];
                eng[j] = eng[j+1];
                eng[j+1] = max_eng;
            }
        }

    }
    */

   bubble_sort(math);
   bubble_sort(eng);


    std::cout << "数学の最高点は、" << math[2] << "です。" << std::endl;
    std::cout << "英語の最高点は、" << eng[2] << "です。" << std::endl;

     
}