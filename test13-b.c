#include <stdio.h>
#define add3(a,b,c) ((a)+(b)+(c))

int main(){
    printf("%d\n",add3(1,2,3)*add3(2+2,5,6));
    return 0;
}
/*
90
*/