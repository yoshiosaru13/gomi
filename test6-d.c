#include <stdio.h>
int min_int(int x,int y);

int main(void){
    int a,b,min;
    scanf("%d%d",&a,&b);
    min = min_int(a,b);
    printf("The smaller is %d\n",min);
    return 0;

}
int min_int(int x,int y){
    int rtn;
    if(x<=y){
        rtn = x;
    }
    else{
        rtn = y;
    }
    return rtn;
    
}
/*1
  100
  The smaller is 1*/