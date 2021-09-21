#include <iostream>
#include <fstream>
#include <vector>

double newton_ip(std::vector<double> &x, std::vector<double> &y,int n, double xi){
    double pn = 0.0, li;
    std::vector<std::vector<double>> a;

    for(int i=0;i<=n;i++) a.at(i).at(0) = y.at(i);

    /* 差商の計算 */
    for(int j=1;j<=n;j++){
        for(int i=0; i<=n;i++){
            a.at(i).at(j) = (a.at(i+1).at(j-1)-a.at(i).at(j-1)) / (x.at(i+j)-x.at(i));
        }
    }

    /* 補間の計算 */
    pn = y.at(0); li = 1.0;
    for(int j=1; j<=n; j++){
        li *= (xi - x.at(j-1));
        pn += a.at(0).at(j) * li;
    }

    return pn;
}

int main(){
    /* データの個数 */
    int n; 

    /* 補間点 */
    double xi = 1.5;

    /* データの個数を入力して、添字を補正。 */
    std::cout << "データの個数を入力してください--->" ; std::cin >> n;
    n -= 1;

    /* 補間点を入力 */
    std::cout << "補間点を入力してください--->" ; std::cin >> xi;

    /*　変数を定義 */
    std::vector<double> x,y;
    std::vector<double> x(n+1,0);
    std::vector<double> y(n+1,0);
    x = {0.0,0.2,0.4,0.6,0.8,1.2,1.4,1.6,1.8,2.0};
    y = {2.0,2.1,1.6,2.6,1.5,2.7,0.67,3.5,0.94,2.0};


    std::cout << "補間の結果は、" << newton_ip(x,y,n,xi) << "です。" << std::endl;
}