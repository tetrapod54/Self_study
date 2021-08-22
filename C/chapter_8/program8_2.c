#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COLUMN 4

int main(void){
    
    FILE *fp;
    double a[ROW][COLUMN],b[ROW][COLUMN];

    if((fp=fopen("input3.dat","r")) == NULL){
        printf("ファイルが見つかりません: input3.dat \n");
        exit(1);
    }

    printf("行列Aの値は次の通りです\n");
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COLUMN;j++){
            fscanf(fp, "%lf",&a[i][j]);
            printf("%5.2f\t",a[i][j]);
        }
    printf("\n");
    }

    printf("行列Bの値は次の通りです\n");
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COLUMN;j++){
            fscanf(fp, "%lf",&b[i][j]);
            printf("%5.2f\t",b[i][j]);
        }
    printf("\n");
    }

    fclose(fp);

    return 0;
}