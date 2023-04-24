#include <stdio.h>
int compare(char *str1,char *str2);
int main(){
    int n;
    char s[300],g[300];
    char *a,*b;
    a = s;
    b = g;
    printf("1つ目の文字列は？ ");
    scanf("%s%*c",a);
    printf("2つ目の文字列は？ ");
    scanf("%s%*c",b);
    n = compare(a,b);
    printf("%d\n",n);
    return 0;
    
}
int compare(char *str1,char *str2){
    int swch=1;
    while(*str1!='\0'){
        if(*str1 != *str2){
            swch = 0;
        }
        str1++;
        str2++;
    }
    return swch;
}
/*
1つ目の文字列は？ HarutoTakase
2つ目の文字列は？ harutotakase
0
*/

