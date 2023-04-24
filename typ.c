#include <stdio.h>
int main(void){
    FILE *fin;
    char buf[256];

    fin = fopen("smp1.txt","r");
    if(fin==NULL){
        printf("入力ファイルがありません\n");
        return 1;
    }
    while(fgets(buf,256,fin)!=NULL){
        printf("%s",buf);
    }
    fclose(fin);

    return 0;
}