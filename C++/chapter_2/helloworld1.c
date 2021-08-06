#include <stdio.h>

int main(void){
    char a; int b;
    float c; double d;

    a='K'; b=123456;
    c=123.456; d=0.123456789;
    printf("a=%c \n" , a);
    printf("b=%d \n" , b);
    printf("a=%f \t" , c); printf("c=%15.10f \n" , c);
    printf("a=%f \t" , d); printf("d=%15.10f \n" , d);

    return 0;

}