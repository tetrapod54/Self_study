#include <stdio.h>

int main(void){

    char str1[5] = "Saga";
    char str2[] = "Saga";

    printf("%s\n",str1);
    for(int i=0;i<5;i++){
        printf("%c \t",str2[i]);
    }

    printf("\n");

    return 0;
    
}