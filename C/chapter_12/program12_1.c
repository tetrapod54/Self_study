#include <stdio.h>

#define N 2

typedef double Matrix[N][N];
typedef double Vector[N];

int main(void){
    Matrix A;
    Vector b;

    printf("%d次正方行列Aの各要素を入力してもらいます\n",N);
    for(int i=0; i<N;i++){
        printf("%d行目の要素を入力してください--->\n",i+1);
        for(int j=0; j<N;j++){
            scanf("%lf",&A[i][j]);
        }
    }

    printf("%d次元ベクトルbの各要素を入力してください--->\n",N);
    for(int i=0;i<N;i++){
        scanf("%lf",&b[i]);
    }

    printf("入力した行列は次の通りです\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%f \t",A[i][j]);
        }
    }

    printf("\n");
    printf("入力したベクトルは次の通りです\n");
    for(int i=0;i<N;i++){
        printf("%f\t",b[i]);
    }
}