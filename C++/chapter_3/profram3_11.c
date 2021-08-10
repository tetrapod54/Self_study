#include <stdio.h>
#include <math.h>

#define EPS pow(10.0,-15.0)

int main(void){

    double a, b;
    a = 0.1 + 0.1 + 0.1 ;
    b = 3.0 / 10.0;

    printf("abs(a-b)=%20.18f\n" ,fabs(a-b));

    if ( fabs(a-b) < EPS) printf("a-b = 0 \n"); else printf("a-b =! 0 \n");
}