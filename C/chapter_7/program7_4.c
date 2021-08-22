#include <stdio.h>

int main(void){

    int a[] = {1,2,3,4};
    int *p1,*p2;

    p2 = a;
    for(int i=0;i<4;i++){
        p1 = &a[i];
        printf("配列要素a[%d]の先頭アドレスは%pです\n",i,p1);
        printf("配列要素a[%d]の先頭アドレスは%pです\n",i,p2+i);
        printf("===========================================\n");

    }
}