#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file;
    char filename[256];
    printf("input filename =");
    gets(filename);
    if((file = fopen(filename,"r")) == NULL){
        printf("can't open file %s\n",filename);
        exit(1);
    }
    fseek(file,-1L,2);
    do{
        putchar(fgetc(file));
    }
    while(!fseek(file,-2L,1));
    putchar('\n');
    return 0;
}