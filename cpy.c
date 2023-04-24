#include <stdio.h>
int main(void){
    FILE *fin,*fout;
    char buf[256];
    char fname[80];
    printf("入力ファイル名：");
    gets(fname);

    if((fin=fopen(fname,"r"))==NULL){
        printf("入力ファイルをオープンできません\n");
        return 1;
    }
    if((fout=fopen("smp2.txt","w"))==NULL){
        printf("出力ファイルをオープンできません\n");
        return 1;
    }

    while(fgets(buf,236,fin)!=NULL){
        fputs(buf,fout);
    }
    fclose(fin);
    fclose(fout);

    return 0;
}