#include <stdio.h>

int sum(int x, int y){
    int z;
    z = x+y;

    return z;
}

int main(void){

    int a,b;

    printf("整数を二つ入力してください---> ");
    scanf("%d %d", &a,&b);

    printf("%dと%dを足すと%dになります。\n",a,b,sum(a,b));
    return 0 ;
}