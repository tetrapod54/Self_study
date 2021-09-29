#include <iostream>

class Array{
private:
    static const int num = 5;
    int* p;

public:
    Array() : p(new int[num]) {std::cout << "領域確保" << std::endl;}
    Array(const Array& x): p(new int[x.num]){
        for(int i=0; i<num; i++) p[i] = x.p[i];
        std::cout << "コピー初期化" << std::endl;
    }
    ~Array(){delete [] p; std::cout << "領域解放" << std::endl;}
    Array& operator=(const Array& x){
        for (int i=0; i < num; i++) p[i] = x.p[i];
        return *this;
    }

};