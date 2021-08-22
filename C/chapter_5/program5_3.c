#include <stdio.h>
#define N 10

int main(void){

    int a[N] = {9,23,5,7,43,51,47,3,24,8};
    int i, tmp,flag;

    do{
        flag = 0;
        for(i=0; i<N-1; i++){
            if(a[i]> a[i+1]){
                tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                flag = 1;
            }
        }
    }while(flag == 1);

    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0 ;
}