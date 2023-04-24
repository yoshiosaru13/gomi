#include <stdio.h>
int count_c(char *str,char c);
int main(){
    char s[300];
    char *a;
    a = s;
    char x;
    int count;
    printf("文字列は？ ");
    scanf("%s%*c",a);
    printf("探す文字は？ ");
    scanf("%c",&x);

    count = count_c(a,x);
    printf("文字%cは%sの中に%d個あります\n",x,a,count);
    return 0;

}
int count_c(char *str,char c){
    int i;
    int n=0;
    while(*str!='\0'){
        if(*str == c){
            n += 1;
        }
        str++;
    }
    return n;
}

/*
文字列は？ mfdiasoigusdlau
探す文字は？ u
文字uはmfdiasoigusdlauの中に2個あります
*/