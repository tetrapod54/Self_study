#include <stdio.h>

int main(void){

    int point;

    printf("点数を入力してください---> ");
    scanf("%d", &point);

    if(point > 100 || point < 0){
        printf("入力に誤りがあります。0~100の間で点数を入力してください。\n");
    }
    else if (point >=80){
        printf("成績は優です\n");
    }
    else if (point >=70){
        printf("成績は良です。\n");
    }
    else{
        printf("成績は可もしくは不可です。\n");
    }
}