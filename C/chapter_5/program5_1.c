#include <stdio.h>

int main(void){

    int x[5];
    printf("整数を五つ入力してください---> ");

    for(int i=0 ;i<5;i++){
        scanf("%d",&x[i]);
    }

    printf("入力した数字を逆順で出力すると\n");

    for(int i=5;i>0;i--){
        printf("%d番目は%dです。",i,&x[i-1]);
    }
}