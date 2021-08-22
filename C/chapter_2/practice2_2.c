#include<stdio.h>
#include<math.h>
#define PAI 3.14159265

int main(void){

    double const pi = 3.14159265;
    double a,b,c,d,x;

    a = exp(1.3863);
    b = sqrt(2);
    c = sin(PAI/4);
    d = atan(1);

    x = a*b*c*d;
    printf("x=%20.14f \n", x);
}