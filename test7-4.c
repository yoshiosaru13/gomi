#include <stdio.h>

int pw(int a, int b);

int main(void){
    int x,y,z;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    
    z = pw(x,y);
    printf("%d^%d = %d\n",x,y,z);
}

int pw(int a, int b){
    int c,i;
    for(i=0;i<b;i++){
        c *= a;
    }
    return c;
}
/*x = 3
y = 5
3^5 = 243