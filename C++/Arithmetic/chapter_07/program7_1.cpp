#include <iostream>
#include <vector>
#include <functional>

inline double func1(double x){
    return (2.0 / (x*x));
}

inline double func2(double x){
    return (4.0 / (1.0 + x*x));
}

double trapezoidal(double a, double b, int n,std::function<double(double)> f){
    double T, h ;

    h = (b - a) / n ;

    /*　台形公式 */
    T = (f(a) + f(b)) / 2.0 ;
    for(int i=1;i<n;i++){
        T += f(a + i * h);
    }
    T = h*T ;
    return T ;
}

int main(){
    int n = 100;

    std::cout << "2.0 / (x*x)を[1,2]で積分します。分割数は、" << n << "です。" << std::endl;
    std::cout << "結果は、" <<  trapezoidal(1,2,100,func1) << "です。" << std::endl;

    std::cout << "4.0 / (1+x*x)を[0,1]で積分します。分割数は、" << n << "です。" << std::endl;
    std::cout << "結果は、" <<  trapezoidal(0,1,100,func2) << "です。" << std::endl;

}