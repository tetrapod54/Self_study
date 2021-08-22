#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a[100];
    FILE *fp;

    if((fp=fopen("binary.dat","rb"))==NULL){
        
        fprintf(stderr,"ファイルbinary.datを開けません\n");
        exit(1);
    }

    fread(a, sizeof(int),100,fp);

    fclose(fp);

    for(int i=0;i<100;i++){
        printf(" %d \t %d \t %d \t %d \n", a[i],a[i+1],a[i+2],a[i+3]);

    }

    return 0 ;
}