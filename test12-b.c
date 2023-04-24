#include <stdio.h>
void print_n(char *str,int number);
int main(){
    char s[300];
    char *a = s;
    int n;
    printf("文字列は？: ");
    scanf("%s",a);
    printf("繰り返し回数は？: ");
    scanf("%d",&n);

    print_n(a,n);
    return 0;
}
void print_n(char *str,int number){
    int i;
    for(i=0;i<number;i++){
        printf("%s",str);
    }
    printf("\n");
    return;
}

/*
文字列は？: fdasu
繰り返し回数は？: 4
fdasufdasufdasufdasu
*/

