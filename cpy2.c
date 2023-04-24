#include <stdio.h>
int main(int argc,char *argv[]){
    FILE *fin,*fout;
    char buf[256];
    
    if(argc!=4){
        printf("用法:cpy2 fromfile tofile\n");
    }
    
    

    if((fin=fopen(argv[2],"r"))==NULL){
        printf("%sをオープンできません\n",argv[1]);
        return 1;
    }
    if((fout=fopen(argv[3],"w"))==NULL){
        printf("%sをオープンできません\n",argv[2]);
        return 1;
    }

    while(fgets(buf,236,fin)!=NULL){
        fputs(buf,fout);
    }
    fclose(fin);
    fclose(fout);

    return 0;
}