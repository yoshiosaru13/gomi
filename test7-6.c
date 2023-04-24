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
    printf("(min=%d,max=%d)\n",b,c);
    count++;
}
/*3
nyuryoku = 3
(min=3,max=3)
2
nyuryoku = 2
(min=2,max=3)
5
nyuryoku = 5
(min=2,max=5)
1
nyuryoku = 1
(min=1,max=5)
30
nyuryoku = 30
(min=1,max=30)