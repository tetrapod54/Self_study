#include <stdio.h>

int main(void){
    double a, b, c, d, e, f;
    int i,j,k;

    a=2.2; b=3.5; c=4.8;
    i=2; j=3;

    k=j/i;
    d = a*b*c;
    e=(a+b)*c/a;
    f=i*a*b;

    printf("k=%d \n",k);
    printf("d=%f \n",d);
    printf("e=%f \n",e);
    printf("f=%f \n",f);

    return 0;
    }