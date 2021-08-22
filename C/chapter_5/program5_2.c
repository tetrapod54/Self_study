#include <stdio.h>

int main(void){

    double x[6]= {1,2,3,4,5,6};
    double y[6]= {-2,-3,-5,6.3,7,-1.2};
    double s = 0.0;

    for(int i=0;i<6;i++){
        s += x[i]*y[i];
    }

    printf("内積の値は、%fです。\n",s);

    return 0;
}