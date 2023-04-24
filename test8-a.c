#include <stdio.h>
void disp_ary(char nn[]);
int main(void){
    char dt[100];
    scanf("%s",dt);
    printf("Input Name = %s\n",dt);
    disp_ary(dt);
    return 0;
}
void disp_ary(char nn[]){
    int i=0;
    while(1){
        printf("%d\n",nn[i]);
        if(nn[i]=='\0'){
            break;
        }
        i++;
    }
}
/*Takase
Input Name = Takase
84
97
107
97
115
101
0*/