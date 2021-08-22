#include <stdio.h>
#include <math.h>

int main(void){

    double a,b,c;
    int D;
    double solve;
    double solve1,solve2;


    printf("ax^2+bx+c=0 の係数 a,b,c を入力してください。--->");
    scanf("%lf %lf %lf",&a,&b,&c);

    D = pow(b,2) - 4*a*c;

    if(a==0 & b==0){
        printf("係数がおかしい");
    }
    else{
        if(a==0){
            solve = -c/b;
            printf("解は、%fです。",solve);
        }
        else{
            if(D > 0){
                solve1 = (-b-sqrt(D))/(2*a);
                solve2 = (-b+sqrt(D))/(2*a);
                printf("解は、%10.5f と %10.5f です。", solve1, solve2);
            }
            else if (D == 0){
                solve = (-b)/(2*a) ;
                printf("解は重解となり、%10.5f です。", solve);
            }

            else if (D < 0){
                printf("虚数解となるため、実数解はありません。");
            }
        }
            
    }
}