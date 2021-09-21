#include <iostream>
#include <fstream>
#include <vector>

/* ラグランジュ補間 */
double lagrange(std::vector<double> &x, std::vector<double> &y,int n, double xi){
    double pn = 0.0,li;

    /* P_n(x)の計算 */
    for(int i=0;i<=n;i++){
        li = 1.0;
        /* l_i(x)の計算 */
        for(int k=0;k<=n;k++){
            if( k != i) li *= (xi-x.at(k))/(x.at(i)-x.at(k)) ;
        }

        pn += li * y.at(i);
    }
    
    return pn ;
}

int main(){

    //変数の宣言
    double xi;
    int n;

    /*データの個数を入力 */
    std::cout << "データの個数を入力してください--->"; std::cin >> n;

    /*添字を調整するために-1して、添字を0,1,…,nとする */
    n -= 1;

    /* 補間点を入力 */
    std::cout << "補間点を入力してください--->"; std::cin >> xi;

    /*　ベクトルを定義。要素数はn+1になる。 */
    std::vector<double> x(n+1,0);
    std::vector<double> y(n+1,0);
    x = {0.0,0.2,0.4,0.6,0.8,1.2,1.4,1.6,1.8,2.0};
    y = {2.0,2.1,1.6,2.6,1.5,2.7,0.67,3.5,0.94,2.0};


    std::cout << "補間の結果は" << lagrange(x,y,n,xi) << "です。" << std::endl;

}