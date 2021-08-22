#include <iostream>

int seq_search(int*a, int n, int key){

    for(int i=0;i<n;i++){
        if(*a++ == key){
            return i;
        }  
    }
    return -1;
}

int main(){

    int key,idx;
    int x[7];
    int x_size = sizeof(x)/sizeof(x[0]);

    for(int i=0; i<x_size;i++){
        std::cout << "x[" << i <<"]:" ;
        std::cin >> x[i];
    }

    std::cout << "探す値は：" ; std::cin >> key ;

    if((idx = seq_search(x,x_size,key)) != -1){
        std::cout << "その値を持つ要素はx[" << idx << "]です。" << std::endl;
    }
    else{
        std::cout << "見つかりませんでした" << std::endl;
    }

}