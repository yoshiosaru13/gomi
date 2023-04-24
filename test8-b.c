#include <stdio.h>
void arysum(char nn[]);
int main(void){
    char str[100];
    printf("Input Name = ");
    scanf("%s",str);
    arysum(str);
    return 0;
}
void arysum(char nn[]){
    int i;
    int a=0;
    for(i=0;nn[i];i++){
        a += nn[i];
    }
    printf("%d\n",a);
}
/*Input Name = Takase
601*/