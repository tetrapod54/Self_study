#include <stdio.h>

int main(void){

    int a[] = {1,2,3,4,5,6,7};
    int *p1,*p2;

    p1 = a;
    p2 = &a[0];

    printf("配列aの先頭アドレスは%pです。\n",p1);
    printf("配列要素a[0]の先頭アドレスは%pです。\n",p2);

    return 0 ;
}