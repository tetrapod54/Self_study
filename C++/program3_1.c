#include <stdio.h>

int main(void){

    int i;

    printf("数字を入力してください---> ");
    scanf("%d", &i);

    if( i < 5 ) printf("入力した文字は5より小さい\n");

    return 0;
}