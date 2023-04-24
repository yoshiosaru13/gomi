#include <stdio.h>
void hyouji(int *ary,int n);
int main(void){
    int x[] = {2,8,5,2,5};
    hyouji(x,5);
}
void hyouji(int *ary,int n){
    int i,wa;
    for(i=0;i<n;i++){
        wa += *(ary+i);
    }
    printf("souwa = %d\n",wa);
}
/*souwa = 22*/