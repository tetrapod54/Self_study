#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int a[100];
    FILE *fp;

    if( (fp=fopen("text.dat","w"))==NULL){
        fprintf(stderr,"ファイルtext.datを作成できません\n");
        exit(1);
    }

    srand((unsigned)time(NULL));
    for(int i=0;i<100;i++){
        fprintf(fp, "%d\n",a[i]);
    }

    fclose(fp);

    if((fp=fopen("binary.dat","wb"))==NULL){
        fprintf(stderr, "ファイルbinary.datを作成できません\n");
        exit(1);
    }

    fwrite(a,sizeof(int),100,fp);
    fclose(fp);

    return 0 ;
}