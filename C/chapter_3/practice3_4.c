#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,d,solve1,solve2;
    double B,C,D;

    printf("2×2行列Aの要素\n a \t b \n c \t d \n\rを順に半角スペースで区切って入力してください。");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    printf("あなたの入力した行列は\n %f \t %f \n %f \t %f \n\rです。", a,b,c,d);

    B = a + d;
    C = a*d - b*c;
    D =  pow(B,2)-4*C;
    
    if(D>=0){

        solve1 = (B - sqrt(D))/2;
        solve2 = (B + sqrt(D))/2;

        if(D>0){
        printf("行列の固有値は、%fと%fです。",solve1,solve2);
        }

        else{
            printf("行列の固有値は、%fです。",solve1);
        }   
    }

    else{
        solve1 = B/2;
        solve2 = sqrt(-D);

        printf("行列の固有値は、%f+%f iと、%f-%f iです。",solve1,solve2);
    }
}