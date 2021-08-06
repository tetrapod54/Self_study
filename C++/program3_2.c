#include <stdio.h>

int main(void){

    int x;
    printf("整数を一つ入力してください---> ");
    scanf("%d", &x);

    if( x >= 0 && x <=100) printf("入力した数値は0以上100以下です。\n");
    if (!(x==100)) printf("入力した数値は100ではない\n");

    return 0;
}