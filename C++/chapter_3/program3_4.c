#include <stdio.h>

int main(void){

    int x;

    printf("整数を入力してください。---> ");
    scanf("%d", &x);

    if (x%2 == 0){
        printf("入力された整数は偶数です。\n");
    }
    else{
        printf("入力された整数は奇数です。\n");
    }

    return 0;
}