#include <stdio.h>
void waseki(int *a,int *b);
int main(void){
    int x=5,y=2;
    printf("x=%d, y=%d\n",x,y);
    waseki(&x,&y);
    printf("x=%d, y=%d\n",x,y);
}
void waseki(int *a,int *b){
    int wa;
    wa = *a + *b;
    *b = *a * *b;
    *a = wa;
}
/*x=5, y=2
x=7, y=10*/