#include <stdio.h>

void min_max_char(char a);

int main(void){
    char x,i;
    int xx;
    for(i=0;i<5;i++){
        scanf("%d",&xx);
        printf("nyuryoku = %d\n",xx);
        x=(char)xx;
        min_max_char(x);
    }

}

void min_max_char(char a){
    static char b,c;
    static int count=0;

    if(count==0){
        b = a;
        c = a;
    }
    else if(a<=b){
        b = a;
    }
    else if(c<=a){
        c = a;
    }
    printf("min=%d,max=%d\n",b,c);
    count++;
}