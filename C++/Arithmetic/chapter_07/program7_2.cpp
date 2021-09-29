#include <iostream>
#include <functional>

inline double func1(double x){
    return (2.0 / x * x);
}

inline double func2(double x){
    return (4.0/(1 + x * x));
}

double simpson(double a, double b, int n, std::function<double(double)> f){

    double S,h;

    h = (b-a)/(2.0*n);
    S = f(a)+f(b);
    
    for(int i=1;i<n;i++){
        S += 4.0*f(a+(2.0*i-1.0)*h) + 2.0*f(a+2.0*i*h) ;
    }

    S += 4.0*f(a+(2.0*n-1.0)*h);
    S = h*S/3.0;

    return S ;
}

int main(){
    int n = 100;

    std::cout << "2.0 / (x*x)を[1,2]で積分します。分割数は、" << n << "です。" << std::endl;
    std::cout << "結果は、" <<  simpson(1,2,100,func1) << "です。" << std::endl;

    std::cout << "4.0 / (1+x*x)を[0,1]で積分します。分割数は、" << n << "です。" << std::endl;
    std::cout << "結果は、" <<  simpson(0,1,100,func2) << "です。" << std::endl;

}