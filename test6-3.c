#include <stdio.h>
int main(void){
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            printf("%c",ch+j);
        }
    }
    printf("\n");
    return 0;
}
/*B
BCDEFGHIJKBCDEFGHIJKBCDEFGHIJKBCDEFGHIJKBCDEFGHIJK*/