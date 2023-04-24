#include <stdio.h>
int main(void){
    int a,b;
    char c;
    double e;
    a=b=2;
    b+=2;   /*b=4*/
    printf("%d\n",b);
    c=95;
    b++;    /*b=5*/
    printf("%d\n",b);
    b+=c;   /*b=100*/
    printf("%d\n",b++);
    printf("%d\n",b);
    e=b;
    printf("%f\n",e);

}