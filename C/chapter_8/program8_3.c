#include <stdio.h>
#include <stdlib.h>

int main(void){

    double a, sum=0.0;
    FILE *fp;

    if((fp=fopen("input4.dat","r"))==NULL){
        printf("ファイルが見つかりません:input4.dat \n");
        exit(1);
    }
    while (fscanf(fp, "%lf",&a) !=EOF){
        sum += a;
    }

    printf("合計は%fです\n",sum);
    fclose(fp);

    return 0;
}