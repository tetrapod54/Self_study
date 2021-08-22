#include <stdio.h>

void swap(double *x,double *y){

    double tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void){

    double a = 1.5,b = 3.6;
    printf("a=%f \t b=%fです\n",a,b);
    printf("aとbの値を入れ替えると\n");
    swap(&a,&b);
    printf("a=%f \t b=%fです\n",a,b);

    return 0;
}