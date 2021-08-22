#include <stdio.h>

int main(void){

    int i = 0;
    int sum = 0;

    while(i++ < 10){

        sum = sum + i;
    }

    printf("１から１０までの和は、%dです。\n",sum);

    return 0;
}