#include <stdio.h>
void reverse(char *str);
int count_n(char *str2);
int main(){
    char s[300];
    char *a;
    a = s;
    printf("文字列は？ ");
    scanf("%s",a);
    reverse(a);
    printf("\n");
    return 0;

}
int count_n(char *str2){
    int i,count=0;
    while(*str2!='\0'){
        count++;
        str2++;
    }
    return count;
}
void reverse(char *str){
    int i,n;
    n = count_n(str);
    for(i=0;i<=n;i++){
        printf("%c",*(str+n-i));
    }

}

/*
文字列は？ sjdfaiu
uiafdjs
*/