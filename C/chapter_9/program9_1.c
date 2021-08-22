#include <stdio.h>
#include <math.h>

#define EPS pow(10.0,-8)
#define KMAX 100

double f(double x){
    return (x-cos(x));
}

double df(double x){
    return (1.0+sin(x));
}

int main(void){
    int k = 0;
    double x, d=100;
    printf("初期値x0を入力してください。\n");
    scanf("%lf",&x);

    while(fabs(d) > EPS && k <KMAX){
        d = -f(x)/df(x);
        x = x + d;
        k++;
    }

    if(k==KMAX){
        printf("答えが見つかりませんでした。\n");
    }
    else{
        printf("答えはx=%fです\n",x);
    }

    return 0;
}