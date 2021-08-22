#include <stdio.h>

void init_val(double *a, int n){
    
    for(int i=0;i<n;i++){
        a[i] = i*0.123;
    }
}

int main(void){

    double x[6];
    int n;

    n = sizeof(x)/sizeof(x[0]);
    init_val(x,n);
    printf("配列の要素の数は%dです。",n);
    printf("各配列要素の中身は次の通りです。\n");
    for(int i=0;i<n;i++){
        printf("x[%d]=%f\n",i,x[i]);
    }

    return 0;
}