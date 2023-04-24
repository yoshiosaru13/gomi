#include <stdio.h>
int count_n(char str[]);
int main(){
    char s[300];
    int c;
    printf("文字列は？ ");
    scanf("%s",s);
    c = count_n(s);
    printf("文字数は%d個\n",c);
    return 0;

}
int count_n(char str[]){
    int i,count = 0;
    for(i=0;str[i]!='\0';i++){
        count += 1;
    }
    return count;
}

/*
文字列は？ fdsau
文字数は5個
*/
