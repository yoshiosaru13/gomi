#include <stdio.h>
int main(void){
    int x,i;
    int ary[3];
    int *ptr1 = &x;
    printf("x no address is %p\n",ptr1);
    for(i=0;i<3;i++){
        int *ptr2 = &ary[i];
        printf("ary[%d] no address is %p\n",i,ptr2);
    }


}
/*
x no address is 0x16dcb7394
ary[0] no address is 0x16dcb739c
ary[1] no address is 0x16dcb73a0
ary[2] no address is 0x16dcb73a4
*/