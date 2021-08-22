#include <stdio.h>
#define N 5

int main(void){
    double a[N] = {3.24,9.26,-2.25,1.23,9.125};
    double tmp = 0;
    double flag = 1;

    while(flag==1){
        flag = 0;
        for(int i=0;i<N-1;i++){
            if(a[i] < a[i+1]){
                tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                flag = 1;
            }
        }
    }

    for(int i=0;i<N;i++){
        printf("%f ",a[i]);
    }

    printf("\n");

    return 0 ;
}