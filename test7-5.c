#include <stdio.h>
int func(int a,int b);
int main(void){
    int x,y,z;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    
    z = func(x,y);
    printf("%d~%dnowa = %d\n",x,y,z);
}
int func(int a,int b){
    int m;
    if(a==b){
        return a;
    }
    m = func(a+1,b);
    return a+m;
    
}
/*x = 4
y = 8
4~8nowa = 30