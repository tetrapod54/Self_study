#include <stdio.h>
#define ROW 2
#define COLUMN 3

int main(void){

    double a[ROW][COLUMN];
    int i,j;

    printf("%d行%d列の行列の各要素を入力してもらいます。\n",ROW,COLUMN);
    for(i=0;i<ROW;i++){
        printf("第%d行の要素を入力してください---> ",i+1);

        for(j=0;j<COLUMN;j++){
            scanf("%lf", &a[i][j]);
        }
    
    }
    printf("各要素の値は次の通りです。");

    for(i=0;i<ROW;i++){
        for(j=0;j<COLUMN;j++){
            printf("a[%d][%d]=%f\t",i+1,j+1,a[i][j]);
        }
        printf("\n");
    }
}