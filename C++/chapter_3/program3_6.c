#include <stdio.h>

int main(void){
    int n;

    printf("西暦年を入力してください---> ");
    scanf("%d", &n);

    if(n%400 == 0){
        printf("閏年です。\n");
    }

    else{
        if(n%4 == 0){
            if(n%100 != 0){
                printf("閏年です。\n");

            }
            else{
                printf("閏年ではありません。\n");
            }
        }
        else{
            printf("閏年ではありません。\n");
        }

    }

}