#include <stdio.h>
#include <math.h>

#define PAI 3.14159265358979
#define DEG_RAD (PAI/180.0)

int main(void){

    printf("sin(30)=%f,\n",sin(30.0*DEG_RAD));
    printf("sin(60)=%f,\n",sin(60.0*DEG_RAD));
    printf("sin(45)=%f,\n",sin(45.0*DEG_RAD));

    printf("sin(30)=%f,\n",sin(30.0*DEG_RAD));
    printf("cos(60)=%f,\n",cos(60.0*DEG_RAD));
    printf("tan(45)=%f,\n",tan(45.0*DEG_RAD));

    return 0;
}