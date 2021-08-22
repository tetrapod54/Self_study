#include <stdio.h>

int main(void){

    int i = 0;
    int sum = 0;

    do{
        sum += ++i;
    }while(i < 10);

    printf("1から10までの和は%dです\n",sum);
}