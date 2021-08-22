#include <stdio.h>

int main(void){

    double a,b,c;

    printf("数字を二つ並べて書いてください。---> ");
    scanf("%lf %lf", &a, &b);

    c =(a > b) ? a : b;

    printf("大きい数字は%fです。\n", c);

    return 0;

}