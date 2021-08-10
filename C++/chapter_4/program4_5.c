#include <stdio.h>

int main(void){

    int sum = 0;

    for(int i=1; i<=10; i++){

        sum += i;
    }

    printf("1から10までの和は%dです。",sum);

    return 0;
}