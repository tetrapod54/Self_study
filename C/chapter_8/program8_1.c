#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *fp;
    double a = 10.0;

    if((fp = fopen("input1.dat","r")) == NULL){
        printf("ファイルが見つかりません: input1.dat \n");
        exit(1);
    } 

    while(a > 0){
        fscanf(fp, "%lf",&a);
        printf("a=%f\n",a);
    }

    fclose(fp);

    return 0;
}